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
        string inputStr;
        cin >> n;
        int minLength = n;
        cin >> inputStr;
        For (0, (n / 2) + 1, i) {
            if (n % 2 == 1 && i == (n / 2) + 1)
                cout << 1 << endl;
            if (inputStr[i] != inputStr[n - (i + 1) ]) {
                minLength == 0 ? minLength = 0 : minLength -= 2;
            }
            else {
                break;
            }
        }
        cout << minLength << "\n";
    }

    return 0;
}
