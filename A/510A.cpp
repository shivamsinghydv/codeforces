// Generic template for codeforces problems
// Author: @shivamsinghydv
#include <bits/stdc++.h>
#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;

int main() {
    char a = '#';
    char b = '.';
    int n, m;
    cin >> n >> m;
    For (0, n, i) {
        if ( i % 2 == 0) {
            cout << string(m, a) << endl;
        }
        else if ( i % 4 == 1) {
            cout << string(m - 1, b) << a << endl;
        }
        else {
            cout << a << string(m - 1, b) << endl;
        }
    }
    return 0;
}
