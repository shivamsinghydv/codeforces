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
        int n, k;
        cin >> n >> k;
        vector <int> inputArr(n);

        for (int i = 0; i < n; i++) {
            cin >> inputArr[i];
        }
        sort(inputArr.begin(), inputArr.end());
        int best = 1, run = 1;
        for (int i = 1; i < n; i++) {
            if (inputArr[i] - inputArr[i - 1] <= k) {
                run++;
            }
            else run = 1;
            best = max(run, best);
        }
        cout << n - best << endl;
    }
    return 0;
}
