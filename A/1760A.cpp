// codeforces solutions
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
        int a, b, c;
        cin >> a >> b >> c;

        if ((a > b && b > c) || (c > b && b > a)) {
            cout << b << "\n";
        }
        else if ((a > c && c > b) || (b > c && c > a)) {
            cout << c << "\n";
        }
        else if ((c > a && a > b) || (b > a && a > c)) {
            cout << a << "\n";
        }
    }

    return 0;
}
