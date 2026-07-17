#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main() {
    //input
    string str = "";
    cin >> str;
    if (str[0] >= 97 && str[0] <= 122) {
        str[0] = str[0] - 32;
    }
    cout << str;
}
