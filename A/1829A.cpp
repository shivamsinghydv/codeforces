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
        string inputStr, refString = "codeforces";
        cin >> inputStr;
        int counter = 0;
        For(0, inputStr.size(), i) {
            if (inputStr[i] != refString[i]) 
                counter++;
        }
        cout << counter << "\n";
    }

    return 0;
}
