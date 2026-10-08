#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> st;
        vector<char> bad(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            char c = s[i - 1];
            if (c == '1') {
                st.push_back(i);
            } else if (c == '2') {
                if (!st.empty()) {
                    st.pop_back();
                    bad[i] = 1;   // document i itself is never printed
                }
                // else: document i printed directly
            }
            // '3': document i printed directly
        }
        for (int x : st) bad[x] = 1;

        vector<int> res;
        for (int i = 1; i <= n; i++)
            if (bad[i]) res.push_back(i);

        cout << res.size() << "\n";
        for (size_t j = 0; j < res.size(); j++) {
            if (j) cout << " ";
            cout << res[j];
        }
        cout << "\n";
    }
    return 0;
}
