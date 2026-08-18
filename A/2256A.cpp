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
        int a, b, c, sum;
        cin >> a >> b >> c;
        
        if (a==b && b == c) {
            cout << 0 << "\n";
            continue;
        }
        int Max = std::max({a, b, c});
        int Min = std::min({a, b, c});
        int Mid = (a + b + c) - (Max + Min);
        sum = Mid + Min;
        Max > sum ? cout << sum - Min  << "\n" : cout << Max - Min << "\n" ;
    }        
    return 0;
}
