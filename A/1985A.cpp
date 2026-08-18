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
        string a, b;
        cin >> a >> b;
        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        cout << a << " " << b << "\n";
    }

    return 0;
}
