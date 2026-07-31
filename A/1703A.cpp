// Generic template for codeforces problems
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

        for (char& c : inputStr) {
            c = tolower(static_cast<unsigned char> (c));
        }
        if (inputStr == "yes") {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
