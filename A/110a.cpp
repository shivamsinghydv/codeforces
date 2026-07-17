#include<iostream>

using namespace std;

int main() {
    string number;
    cin >> number;
    int counter = 0;
    for (int i = 0; i < number.length(); i++) {
        if (number[i] == '4' | number[i] == '7'){ 
            counter += 1;
        }
    }
    //cout << counter;
    counter == 4 | counter == 7 ? cout << "YES" : cout << "NO";
}
