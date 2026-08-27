// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, count = 0;
    cin >> n >> k;
    
    vector <int> members(n);
    For (0, n, i) {
        cin >> members[i];
    }
    for (int x : members) {
        if (x <= 5 - k) {
            count++;
        }
    }
    cout << count / 3 << endl;


    return 0;
}
