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
        int n, x;
        cin >> n >> x;
        vector <int> trip(n);
        For (0, n, i) {
            cin >> trip[i];
        }

        int prev = 0, max = 0;
        for (int k : trip) {
            if (k - prev > max) {
                max = k - prev;
            }
            prev = k;
        }
        max > (x - trip[n - 1]) * 2 ?  cout << max << "\n" : cout << (x - trip[n -1]) * 2 << "\n";
    }

    return 0;
}
