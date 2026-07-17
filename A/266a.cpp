#include<iostream>

using namespace std;
int main () {
    int n, counter = 0;
    string str = "";
    cin >> n;
    cin >> str;
    if (!(str.length() == n))
        return 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == str[i + 1]) {
            str.erase(i, 1);
            i -= 1;
            counter += 1;
        }
    }
    cout << counter;
}
