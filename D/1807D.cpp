/*
 * Problem   : 1807D - Odd Queries
 * Link      : https://codeforces.com/problemset/problem/1807/D
 * Rating    : 900
 * Tags      : data structures, implementation
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
    int n, q;
    cin >> n >> q;
    vi a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        a[i] = a[i - 1] + x;
    }

    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;
        ll s = a[n] - (a[r] - a[l - 1]) + k * (r - l + 1);
        std::cout << (s % 2 != 0 ? "YES" : "NO") << "\n";
        // if newSum is odd, and k*(r - l) is even, isODD = true
    }
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
