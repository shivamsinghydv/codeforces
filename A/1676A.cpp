// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int sumDigits(int p) {
    return (p / 100) + (p % 10) + ((p / 10) % 10);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int ticket;
        cin >> ticket;
        
        int firstThree = ticket / 1000;
        int lastThree = ticket % 1000;
        
        int sumA = sumDigits(firstThree);
        int sumB = sumDigits(lastThree);
        
        sumA == sumB ? cout << "YES" << "\n" : cout << "NO" << "\n";
    }
    return 0;
}
