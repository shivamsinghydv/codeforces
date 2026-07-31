// Generic template for codeforces problems
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, digit, factor = 1;
        cin >> n;
        vector<int> remainder(4);
        while (n > 0) {
            digit = n % 10;
            remainder.push_back( digit * factor);
            factor *= 10;
            n /= 10;
        }
        int counter = 0;
        for (int n : remainder){
            if (n > 0) {
                counter++;
            }
        }
        cout << counter << endl;
        for (int n : remainder) {
            if (n > 0)
                cout << n << " ";
        }
        cout << endl;

        
    }
    return 0;
}
