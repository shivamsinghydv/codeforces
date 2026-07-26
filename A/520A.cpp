#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    int n;
    string str;
    cin >> n;
    cin >> str;

    vector<int> seen(26, false);
    int index;
    for (char c : str) {
        char lower_c = std::tolower(c);

        if (lower_c >= 'a' &&  lower_c <= 'z') {
            index = lower_c - 'a';
            seen[index] = true;
        }
    }
    int counter = 0;
    for (bool a : seen) {
        if (a == true) {
            counter++;
        }
    }
    counter == 26 ? cout << "YES" << endl : cout << "NO" << endl;
}
