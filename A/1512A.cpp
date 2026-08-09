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
        
        int counterA = 0, counterB = 0, idx = 0;
        int numB = 0, numA = arr[0];
        For (1, n, i) {
            if (counterA > 2 || counterB > 2) {
                idx = i;
                break;
            }
            if (arr[i] == numA) {
                counterA++;
            }
            else {
                if (numB == 0)
                    numB = arr[i];
                counterB++;
            }
        }
        cout << idx + 1 << "\n";
    }
    return 0;

}
