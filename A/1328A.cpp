#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;
        if (n % d)  {
            cout << d - (n % d) << "\n"; 
        }
        else {
            cout << 0 << "\n";
        }
    }
    return 0;

}
