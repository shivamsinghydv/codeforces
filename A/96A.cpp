#include <iostream>
#include <string>

using namespace std;

int main() {
    string position = "";
    cin >> position;
    char team = position[0];
    int counter = 0;
    for (char c : position) {
        if ( c == team) {
            counter++;
        }
        else {
            team = c;
            counter = 1;
        }
        if (counter >= 7) {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
    return 0;
}
