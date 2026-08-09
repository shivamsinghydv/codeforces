// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << a << " " << 0 << endl;
    }
    else {
        //a < b ? cout << a << " " : cout << b << " ";
        a > b ? cout << b << " " << (a - b) / 2 << endl : cout << a << " " << (b - a) / 2 << endl;
    }

    return 0;
}
