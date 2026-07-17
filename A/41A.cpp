#include<iostream>
#include<string>

using namespace std;

int main () {
    string s, t;
    cin >> s; 
    cin >> t;
    int len = s.length();
    if (s.length() != t.length()) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (s[i] != t[s.size() -1 - i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
