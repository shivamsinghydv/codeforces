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
        int n, counter = 0;
        string inputStr, targetStr = "Timur";
        cin >> n;
        cin >> inputStr;
        if (n != 5) {
            cout << "NO" <<"\n";
            continue;
        }
        sort(targetStr.begin(), targetStr.end());
        sort(inputStr.begin(), inputStr.end());
        if ( targetStr == inputStr) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
