/*
 * Problem   : 1791D - Distinct Split
 * Link      : https://codeforces.com/problemset/problem/1791/D
 * Rating    : 1000
 * Tags      : brute force, greedy, strings
 * Date      : 2026-10-17
 * Author    : @shivamsinghydv
 */

#include <bits/stdc++.h>
#include <iostream>
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
  string inStr;
  cin >> n >> inStr;
  vi pre(n), suf(n);
  bool seen[26] = {};
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (!seen[inStr[i] - 'a']) {
      seen[inStr[i] - 'a'] = true;
      count++;
    }
    pre[i] = count;
  }
  fill(seen, seen + 26, false);
  count = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (!seen[inStr[i] - 'a']) {
      seen[inStr[i] - 'a'] = true;
      count++;
    }
    suf[i] = count;
  }
  int res = 0;
  for (int i = 0; i < n - 1; i++) {
    res = max(res, pre[i] + suf[i + 1]);
  }
  cout << res << "\n";
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
