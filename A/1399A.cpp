// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> arr(n);
        For (0, n, i) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << "YES" << "\n";
        }
        sort(arr.begin(), arr.end());
        int diff, prev = arr[0];
        For (1, n, i) {
            diff = arr[i] - prev;
            prev = arr[i];
            if (diff > 1) {
                cout << "NO" << "\n";
                break;
            }

            if (i == n - 1) {
                cout << "YES" << "\n";
            }
        }
    }

    return 0;
}
