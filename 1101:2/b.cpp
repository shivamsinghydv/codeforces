#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    int mod = 998244353;
    while (t--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        long long freeCells = (long long)n * m - (long long)(n - r + 1) * (m - c + 1);
        long long a = 2;
        long long res = 1;

        while (freeCells > 0) {
            if (freeCells % 2 == 1)
                res = (res * a) % mod;

            a = (a * a) % mod;
            freeCells /= 2;
        }
        res %= mod;
        cout << res << endl;
    }
    return 0;
}