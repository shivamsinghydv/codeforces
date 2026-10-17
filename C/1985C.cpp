/*
 * Problem   : 1985C - Good Prefixes
 * Link      : https://codeforces.com/problemset/problem/1985/C
 * Rating    : 1000
 * Tags      : greedy
 * Date      : 2026-10-12
 * Author    : @shivamsinghydv
 */

#include <bits/stdc++.h>
using namespace std;

#define For(start, end, i) for (int i = (start); i < (end); i++)
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
    ll sum = 0, maxInt = 0;
    int counter = 0;
    For (0, n, i) {
        ll x;
        cin >> x;
        sum += x;
        maxInt = max(maxInt, x);
        if (2*maxInt == sum) counter++;
    }
    cout << counter << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;  // remove if the problem has a single test case
    while (t--) {
        solve();
    }
    return 0;
}
