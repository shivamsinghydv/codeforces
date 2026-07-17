#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve () {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long current_sum = a[0];
    vector<long long> ans; //review
    ans.push_back(a[0]);

    for (int i = 1; i < n; i++) {
        current_sum += a[i];

        ans.push_back(min(ans[i-1], current_sum / (i + 1)));
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
        }
}
