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
        int n, k;
        cin >> n >> k;
        bool doesExist = false;
        vector<int> arr(n);
        For (0, n, i) {
            cin >> arr[i];
        }
        for (int a : arr) {
            if (a == k) {
                doesExist = true;
            }
        }
        doesExist ? cout << "YES" << "\n" : cout << "NO" << "\n";

    }

    return 0;
}
