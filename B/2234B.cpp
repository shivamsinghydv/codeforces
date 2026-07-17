#include<iostream>
#include<string>

using namespace std;


        long long n;
        cin >> n;
        if (n == 10) {
            cout << -1 << "\n";
        }
        else if (n % 2 < 10) {
            cout << n % 2;
        }
        else if (n % 2 == 11) {
            cout << n % 12 << n - n % 2;
        }
        else {
            cout << 0 << n ;
        }

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n == 10) {
            cout << -1 << "\n";
        }
        else if (n % 2 < 10) {
            cout << n % 2;
        }
        else if (n % 2 == 11) {
            cout << n % 12 << n - n % 2;
        }
        else {
            cout << 0 << n ;
        }

    }
}
