#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    string vowel = "aeiouy";
    for (char ch : vowel) {
        if (ch == c) {
            return true;
        }
    }
    return false;
}
int main() {
    string inputStr;
    cin >> inputStr;
    string finalStr = "";
    for (char ch : inputStr) {
        char c = std::tolower(ch);
        if ( isVowel(c)) {
            continue;
        }
        finalStr = finalStr + "." + c;
    }
    cout << finalStr << "\n";
    return 0;
}
