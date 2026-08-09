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

    vector<int> arr(4);
    while (t--) {
        int max = 0, counter = 0;
        For (0, 4, i) {
            cin >> arr[i];

            if (i != 0 && arr[i] > arr[0] ) {
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
