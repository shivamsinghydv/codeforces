// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

// #define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int k, count = 0;
        cin >> k;
        int currentNum = 0;
        while ( currentNum < k) {
            count++;
            if (count % 3 != 0 && count % 10 != 3) {
                currentNum++;
            }
            
        }
        cout << count << "\n";
    }

    
    return 0;
}
