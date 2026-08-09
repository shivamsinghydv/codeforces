// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k, r;

    cin >> k >> r;

    For (1, 10, i) {
        int cost = i * k;
        if (cost % 10 == 0 || (cost - r) % 10 == 0) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
