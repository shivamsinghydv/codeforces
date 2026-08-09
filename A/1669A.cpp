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
        int rating;
        cin >> rating;

        if (rating <= 1399) {
            cout << "Division 4" << "\n";
        }
        else if (rating >= 1400 && rating <=1599) {
            cout << "Division 3" << "\n";
        }
        else if (rating >= 1600 && rating <= 1899) {
            cout << "Division 2" << "\n";
        }
        else {
            cout << "Division 1" << "\n";
        }
    }

    return 0;
}
