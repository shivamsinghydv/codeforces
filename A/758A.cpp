// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, max = 0;
    cin >> n;
    vector <int> arr(n);
    For ( 0, n, i) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int totalBurles = 0;
    for (int n : arr) {
        totalBurles += max - n;
    }
    cout << totalBurles << endl;

    return 0;
}
