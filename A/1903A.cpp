// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
bool isSorted(vector <int> a) {
    int prev = a[0];
    for (int num : a) {
        if (num < prev)
            return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector <int> arr(n);
        For (0, n, i) {
            cin >> arr[i];
        }
        /* 
        if (k == 1 && isSorted(arr)) {
            cout << "YES\n";
        }
        else */
        if (k > 1 || isSorted(arr)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
