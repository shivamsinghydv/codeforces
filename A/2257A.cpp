// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
bool isAbbr() {
    int n, m;
    if (!(cin >> n >> m)) return false;
    unordered_set <char> abbrChars;
    vector <string> abbrS(m);

    For (0, n, i) {
        string ordinaryStr;
        cin >> ordinaryStr;
        abbrChars.insert(toupper(ordinaryStr[0]));
    }
    For (0, m, i) {
        cin >> abbrS[i];
    }
    For (0, m, i) {
        for (char c : abbrS[i]) {
            if (abbrChars.find( toupper(c)) == abbrChars.end()) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
       isAbbr() ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
