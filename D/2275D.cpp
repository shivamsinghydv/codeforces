// codeforces solutions
// Author: @shivamsinghydv

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n), b(n), c(n), s(n);
        ll mn = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i] >> c[i];
            s[i] = a[i] + b[i] + c[i];
            mn = min(mn, s[i]);
        }

        auto feasible = [&](ll S) -> bool {
            ll total = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] >= S) continue;
                ll m;
                if (a[i] <= b[i] && b[i] <= c[i]) {
                    if (a[i] == c[i]) return false;      // all equal: stuck
                    ll L = min(c[i] - b[i], b[i] - a[i]) + 1;
                    m = (S - s[i]) + 2 * L;
                } else {
                    m = S - s[i];
                }
                total += m;
                if (total > k) return false;
            }
            return true;
        };

        ll lo = mn, hi = mn + k;   // lo is always feasible
        while (lo < hi) {
            ll mid = lo + (hi - lo + 1) / 2;
            if (feasible(mid)) lo = mid;
            else hi = mid - 1;
        }
        cout << lo << "\n";
    }
    return 0;
}
