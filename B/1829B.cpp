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
        vector<bool> a(n);
        int counter = 0;
        int maxCount = 0;
        For (0, n, i) {
            bool temp;
            cin >> temp;
            if (temp == false) {
                counter++;
            }
            else {
                if (counter > maxCount) {
                    maxCount = counter;
                }
                counter = 0;
            }
        }
        if  (counter > maxCount)
            maxCount = counter;
        cout << maxCount << endl;
            
    }

    return 0;
}
