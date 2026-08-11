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
        
        int CommonNum = arr[0];
        if (arr[0] != arr[1] && arr[0] != arr[2]) {
            CommonNum = arr[1];
        }

        For (0, n, i) {
            if (arr[i] != CommonNum) {
                cout << i + 1 << "\n";
            }
        }
    }
    return 0;

}
