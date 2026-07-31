// Generic template for codeforces problems
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n < 3) {
            cout << 0 << "\n";
        }
        else {
            n % 2 == 0 ? cout << n / 2 - 1 << "\n": cout << n / 2 << "\n";
        }
    }
    return 0;

}
