// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string inputStr = "";
    string resultStr = "";
    cin >> inputStr;
    For ( 0, inputStr.length(), i) {
        if (inputStr[i] == '.') {
            resultStr += '0';
        }
        else if (inputStr[i] == '-') {
            inputStr[i+1] == '.' ? resultStr += '1' : resultStr += '2';
            i++;
        }
    } cout << resultStr << endl;

    return 0;
}
