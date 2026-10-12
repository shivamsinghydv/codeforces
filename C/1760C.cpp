// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
       int n;
       cin >> n;
       vector<int> arr(n);
       int maxInt = INT_MIN, secondInt = INT_MIN;
       for (int i = 0; i < n; i++) {     
           cin >> arr[i];
           if (arr[i] > maxInt) {
               secondInt = maxInt;
               maxInt = arr[i];   
           }
           else if (arr[i] > secondInt) {
               secondInt = arr[i];
           }
       }
//       cout << maxInt << secondInt << endl;
       for (uint32_t n : arr) {

           int output = maxInt == n ? n - secondInt : n - maxInt;
           
           cout << output << " ";
       }
       cout << endl;
    }
    return 0;
}
