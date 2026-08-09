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
        vector<int> arr(n);
        For (0, n, i) {
            cin >> arr[i];
        }
        unsigned int oddCount = 0;
        for (int a : arr) {
            if (a % 2 != 0) {
                oddCount++;
            }
        }
        oddCount % 2 == 0 ? cout << "YES" << "\n" : cout << "NO" << "\n";
    }

    return 0;
}
