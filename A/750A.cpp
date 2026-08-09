// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, maxTime = 240;
    cin >> n >> k;
    maxTime -= k;
    int timeTaken = 0;
    int counter = 0;
    for (int i = 1; i <= n; i++) 
    {   
        if (timeTaken + 5*i <= maxTime)
        {
            timeTaken += 5*i;
            counter++;
        } else {
            break;
        }
    } 
    cout << counter << "\n";
    return 0;
}
