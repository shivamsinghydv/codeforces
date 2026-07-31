// Generic template for codeforces problems
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b, c;
    while (t--) {
        cin >> a >> b >> c;
        a + b == c || a + c == b || b + c == a ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
