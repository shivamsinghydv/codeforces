/*
 * Problem   : 1703D - Double Strings
 * Link      : https://codeforces.com/problemset/problem/1703/D
 * Rating    : 1100
 * Tags      : brute force, data structures, strings
 * Date      : 2026-10-15
 * Author    : @shivamsinghydv
 */

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << endl
#else
#define dbg(x)
#endif

void solve() {
  int n;
  cin >> n;
  vector<string> strArray(n);
  unordered_set<string> seen;
  seen.reserve(n * 2);
  for (auto &s : strArray) {
    cin >> s;
    seen.insert(s);
  }
  string res = "";
  for (auto &s : strArray) {
    bool found = false;
    for (size_t i = 0; i < s.size() && !found; i++) {
      if (seen.count(s.substr(0, i)) && seen.count(s.substr(i)))
        found = true;
    }
    res += found ? "1" : "0";
  }
  std::cout << res << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
