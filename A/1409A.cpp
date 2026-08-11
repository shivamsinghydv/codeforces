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
        int a, b, diff, rem = 0;
        cin >> a >> b;
        if (a > b) {
            diff = a - b;
        }
        else if (a == b) {
            cout << 0 << "\n";
            continue;
        }
        else {
            diff = b - a;
        }
        if (diff % 10 != 0)
            rem = 1;
        cout << diff / 10 + rem << "\n";


    }

    return 0;
}
