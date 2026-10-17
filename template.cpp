/*
 * Problem   : <ContestID><Index> - <Title>
 * Link      : https://codeforces.com/problemset/problem/<ContestID>/<Index>
 * Rating    : <800 / 1000 / ...>
 * Tags      : <implementation, greedy, math, ...>
 * Date      : <YYYY-MM-DD>
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

void solve();
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
