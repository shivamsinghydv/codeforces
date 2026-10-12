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
        int n, k;
        cin >> n >> k;
        string inputStr;
        cin >> inputStr;
        int output = 0;

        for (size_t i = 0; i < inputStr.size();) {
            if (inputStr[i] == 'B') {
                output++;
                i+=k;
            }
            else i++;
        }
        cout << output << "\n";
    }

    return 0;
}
