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
        char c; 
        cin >> c;
        bool isPresent = false;
        for (char ch : "codeforces") {
            if (ch == c) {
                isPresent = true;
            }
        }
        isPresent ? cout << "YES" << "\n" : cout << "NO" << "\n";
    }
    return 0;
}
