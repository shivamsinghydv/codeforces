// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> digits(4);
    int idxMax = 0;
    For (0, 4, i) {
        cin >> digits[i];
        if (digits[i] > digits[idxMax]) {
            idxMax = i;
        }
    }
    vector<int> result(4);
    For (0, 4, i) {
        if (i == idxMax){
            continue;
        }
        result[i] = digits[idxMax] - digits[i];

        if (result[i] != 0) {
            cout << result[i] << " ";
        }
    }

    
    return 0;
}
