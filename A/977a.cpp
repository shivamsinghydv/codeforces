#include<iostream>

using namespace std;
int main() {
    long long num;
    int sub;
    cin >> num >> sub;
    while (sub) {
    num % 10 == 0 ? num = num/10 : num --;
    sub--;
    }
    cout << num;
}
