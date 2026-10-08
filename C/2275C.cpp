#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        int m = n - 4;
        vector<int> v(m + 1);
        for (int x = 1; x <= m; x++) v[x] = a[x] + a[x + 2] - a[x + 4];

        vector<int> s(v.begin() + 1, v.end());
        sort(s.begin(), s.end());

        long long ans = 0;
        for (size_t i = 0; i < s.size();) {
            size_t j = i;
            while (j < s.size() && s[j] == s[i]) j++;
            long long c = j - i;
            ans += c * (c - 1) / 2;
            i = j;
        }

        for (int x = 1; x <= m; x++) {
            if (x + 2 <= m && v[x] == v[x + 2]) ans--;
            if (x + 4 <= m && v[x] == v[x + 4]) ans--;
        }

        cout << ans << "\n";
    }
    return 0;
}
