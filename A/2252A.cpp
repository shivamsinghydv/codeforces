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
        int n, sum = 0;
        cin >> n;
        vector<int> arr(n);
        For (0, n, i) {
            cin >> arr[i];
        }
        int equalCount = 0,prev = 0;
        For(0, n, i) {
            if (equalCount > n / 2 + 1) {
                break;
            }
            sum += arr[i];
            if (arr[i] == prev) {
                equalCount++;
            }
            prev = arr[i];               
        }
        cout << sum << "\n";
    }
    return 0;
}
