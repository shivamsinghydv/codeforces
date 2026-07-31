#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int nBills = 0;
    nBills += n /100;
    n %= 100;
    nBills += n/ 20;
    n %= 20;
    nBills += n /10;
    n %= 10;
    nBills += n /5;
    n %= 5;
    nBills += n;
    
    cout << nBills << "\n";
    return 0;
}
