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
        int n;
        cin >> n;
        
        cout << (n % 10) + (n / 10) << "\n";
    }

    return 0;
}
