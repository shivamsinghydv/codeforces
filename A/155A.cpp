// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>
 
#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int max, min, counter = 0;
    if (n <= 1) {
        cout << 0 << "\n";
        return 0;
    }
    For (0, n, i) {
        int k;
        cin >> k;
        if (i == 0) {
            max = k, min = k;
            continue;
        }
        if(k > max ) {
            max = k;
            counter++;
        }
        else if (k < min) {
            min = k;
            counter++;
        }
    }
    cout << counter << "\n";
 
    return 0;
}
