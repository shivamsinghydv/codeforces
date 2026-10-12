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
            int n;
            cin >> n;
            vector<long long int> inBucket(n);
            long long sum = 0;
            For (0, n, i) {
                cin >> inBucket[i];
                sum += inBucket[i];
            }
            static_cast<long long int>(sqrt(sum))*sqrt(sum) == sum
                ? cout << "Yes\n" : cout << "No\n";
    }

    return 0;
}
