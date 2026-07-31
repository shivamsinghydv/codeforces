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
    vector<pair<int, int> > teamsUniform(n);
    For (0, n, i) {
        cin >> teamsUniform[i].first >> teamsUniform[i].second;
    }
    int matchingCount = 0;
    For (0, n, i) {
        For (0, n, j) {
            if (i != j && teamsUniform[i].first == teamsUniform[j].second)
                matchingCount++;
        }
    }
    cout << matchingCount << endl;
    return 0;
}
