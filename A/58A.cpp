#include <iostream>
#include <string>

using namespace std;

int main() {
    string target = "hello";
    string inputStr = "";
    cin >> inputStr;
    int targetPtr = 0;

    for (int i = 0; i < inputStr.length(); i++) {
        if (inputStr[i] == target[targetPtr]) {
                targetPtr++;
                //cout << targetPtr;
        }
        if (targetPtr == 5) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << "\n";

    return 0;
}
