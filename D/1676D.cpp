/*
 * Problem   : 1676D - X-Sum
 * Link      : https://codeforces.com/problemset/problem/1676/D
 * Rating    : 1000
 * Tags      : brute force, greedy, implementation
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
    int m, n;
    cin >> m >> n;
    vector<vi> inMatrix(m, vi (n));

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) {
            cin >> inMatrix[i][j];
        }
    }
    vll d1(m + n);
    vll d2(m + n);
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            d1[i - j + n] += inMatrix[i][j];
            d2[i+j]       += inMatrix[i][j];
        }
    } 
    ll maxSum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ll sum = d1[i-j+n] + d2[i+j] - inMatrix[i][j];
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }
    cout << maxSum << "\n";
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
