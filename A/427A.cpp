// Generic template for codeforces problems
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> nEvents(n);
    For (0, n, i) {
        cin >> nEvents[i];
    }
    int cops = 0, unAttended = 0;
    for (int i : nEvents) {
        if (i > 0) {
            cops += i;
        }
        else {
            if (cops <= 0) unAttended++;
            else cops--;
        }
    }
    cout << unAttended << endl;
    return 0;
}
