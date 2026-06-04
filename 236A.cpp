#include<iostream>
#include<cstring>
using namespace std;

string remove_duplicates(string s) {
    bool seen[256] = {false};
    string final_str = "";
    for (char c : s) {
        if (!seen[(unsigned char)c]) {
        seen[(unsigned char)c] = true;
        final_str += c;
        }
    }
    return final_str;
}

int main() {
    string str;
    cin >> str;
    int length_ = remove_duplicates(str).length();
    length_ % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
}
