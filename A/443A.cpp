#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<char> uniqueLetters;
    for (char c : s) {
        if ( c >= 'a' && c <= 'z') {
            uniqueLetters.insert(c);
        }
    }
    cout << uniqueLetters.size() << "\n";
    return 0;
}
