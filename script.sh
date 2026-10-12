#!/usr/bin/env bash
# Usage: ./new.sh <problem-id> [folder]
#   ./new.sh 1985C            -> <repo>/C/1985C.cpp   (folder = problem letter)
#   ./new.sh 1985B1           -> <repo>/B/1985B1.cpp
#   ./new.sh 1985C 800-1000   -> <repo>/800-1000/1985C.cpp
# <repo> is the folder this script lives in, so it works from any directory.
#
# Fills in the header of template.cpp: problem ID, title, rating, tags,
# link and date. Title/rating/tags come from the Codeforces API
# (cached locally, so it only downloads the problem list occasionally).
#
# Set EDITOR (e.g. export EDITOR=vim) to open the file after creating it.

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TEMPLATE="$SCRIPT_DIR/template.cpp"
CACHE_DIR="${XDG_CACHE_HOME:-$HOME/.cache}/cfnew"
CACHE="$CACHE_DIR/problems.json"
API="https://codeforces.com/api/problemset.problems"

if [[ $# -lt 1 || $# -gt 2 ]]; then
    echo "Usage: $0 <problem-id, e.g. 1985C> [folder]" >&2
    exit 1
fi

ID="$1"

if [[ ! "$ID" =~ ^([0-9]+)([A-Za-z][0-9]?)$ ]]; then
    echo "Invalid problem id '$ID'. Expected something like 1985C or 1985B1." >&2
    exit 1
fi

CONTEST="${BASH_REMATCH[1]}"
INDEX="$(echo "${BASH_REMATCH[2]}" | tr '[:lower:]' '[:upper:]')"
ID="${CONTEST}${INDEX}"

# default folder is the problem letter (C, B, ...); an explicit folder is
# relative to the repo unless it is an absolute path
FOLDER="${2:-${INDEX:0:1}}"
if [[ "$FOLDER" == /* ]]; then
    DIR="$FOLDER"
else
    DIR="$SCRIPT_DIR/$FOLDER"
fi
OUT="$DIR/$ID.cpp"

[[ -f "$TEMPLATE" ]] || { echo "Template not found: $TEMPLATE" >&2; exit 1; }
[[ -e "$OUT" ]] && { echo "Refusing to overwrite existing file: $OUT" >&2; exit 1; }


fetch_cache() {
    command -v curl >/dev/null 2>&1 || return 1
    mkdir -p "$CACHE_DIR"
    if curl -fsS --max-time 30 "$API" -o "$CACHE.tmp" 2>/dev/null; then
        mv "$CACHE.tmp" "$CACHE"
    else
        rm -f "$CACHE.tmp"
        return 1
    fi
}

lookup() {
    [[ -s "$CACHE" ]] || return 0
    python3 - "$CACHE" "$CONTEST" "$INDEX" <<'PY' 2>/dev/null || true
import json, sys
path, contest, index = sys.argv[1], int(sys.argv[2]), sys.argv[3]
with open(path) as f:
    problems = json.load(f)["result"]["problems"]
for p in problems:
    if p.get("contestId") == contest and p.get("index") == index:
        print(p.get("name", ""))
        print(p.get("rating", ""))
        print(", ".join(p.get("tags", [])))
        break
PY
}

NAME=""; RATING=""; TAGS=""
if command -v python3 >/dev/null 2>&1; then
    # download if there is no cache or it is older than 7 days
    if [[ ! -s "$CACHE" ]] || [[ -n "$(find "$CACHE" -mtime +7 2>/dev/null)" ]]; then
        fetch_cache || echo "Note: could not fetch problem list (offline?)." >&2
    fi
    { IFS= read -r NAME; IFS= read -r RATING; IFS= read -r TAGS; } < <(lookup) || true
    # not found: the problem may be new, so refresh a day-old cache once and retry
    if [[ -z "$NAME" && -n "$(find "$CACHE" -mtime +0 2>/dev/null)" ]]; then
        if fetch_cache; then
            { IFS= read -r NAME; IFS= read -r RATING; IFS= read -r TAGS; } < <(lookup) || true
        fi
    fi
else
    echo "Note: python3 not found, skipping title/rating/tags." >&2
fi

# escape text for use in a sed replacement that uses | as the delimiter
esc() { printf '%s' "$1" | sed -e 's/[\\&|]/\\&/g'; }

SED_ARGS=(
    -e "s|<ContestID><Index>|${ID}|g"
    -e "s|<ContestID>|${CONTEST}|g"
    -e "s|<Index>|${INDEX}|g"
    -e "s|<YYYY-MM-DD>|$(date +%F)|g"
)
[[ -n "$NAME"   ]] && SED_ARGS+=(-e "s|<Title>|$(esc "$NAME")|")
[[ -n "$RATING" ]] && SED_ARGS+=(-e "s|<800 / 1000 / \.\.\.>|$(esc "$RATING")|")
[[ -n "$TAGS"   ]] && SED_ARGS+=(-e "s|<implementation, greedy, math, \.\.\.>|$(esc "$TAGS")|")

mkdir -p "$DIR"
sed "${SED_ARGS[@]}" "$TEMPLATE" > "$OUT"

echo "Created $OUT"
[[ -n "$NAME"   ]] && echo "Title : $NAME"
[[ -n "$RATING" ]] && echo "Rating: $RATING"
[[ -n "$TAGS"   ]] && echo "Tags  : $TAGS"
echo "Link  : https://codeforces.com/problemset/problem/${CONTEST}/${INDEX}"

if [[ -n "${EDITOR:-}" ]]; then
    exec "$EDITOR" "$OUT"
fi
