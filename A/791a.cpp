#include<iostream>

using namespace std;
int main() {
    int Limak, Bob, years = 0;
    cin >> Limak >> Bob;
    while (Limak <= Bob) {
        Limak = Limak * 3;
        Bob = Bob * 2;
        years++;
    }
    cout << years;

}
