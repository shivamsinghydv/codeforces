// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, mishka = 0, chris = 0;
    cin >> t;
    while (t--) {
        int mishkaScore, chrisScore;
        cin >> mishkaScore >> chrisScore;
        if (mishkaScore > chrisScore) {
            mishka++;
        }
        else if (mishkaScore == chrisScore) {
            continue;
        }
        else {
            chris++;
        }
    }
    if (mishka == chris) {
        cout << "Friendship is magic!^^" << "\n";
    }
    else if (mishka > chris) {
        cout << "Mishka" << "\n";
    }
    else {
        cout << "Chris" << "\n";
    }
    return 0;
}
