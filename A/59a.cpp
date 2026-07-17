#include<iostream>
#include<string>

using namespace std;
int main () {
    string str;
    cin >> str;
    //calculate the number of operations for a wor
    int lc = 0, uc = 0;
    for (char c : str) {
        (c <= 122 && c >= 97) ? lc += 1 : uc += 1;
    }
    for (char &c : str) {
        if (lc < uc && c >= 97 && c <=122) {
            c = c - 32;
        }
        else if (uc <= lc && c <= 90 && c >= 65) {
            c = c + 32;
        }
        else {
            c = c;
        }
    }
    cout << str;
}
