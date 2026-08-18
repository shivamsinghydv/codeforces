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
        string inputStr;
        cin >> inputStr;
        (inputStr[0] == 'a' || inputStr[1] == 'b' || inputStr[2] == 'c')
            ? cout << "YES\n" : cout << "NO\n"; 
    }

    return 0;
}
