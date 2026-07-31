
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string guestStr, hostStr, pileStr;
    cin >> guestStr >> hostStr >> pileStr;
    string mainStr = hostStr + guestStr;
    int mainCount = 0, pileCount = 0;
    sort(mainStr.begin(), mainStr.end());
    sort(pileStr.begin(), pileStr.end());
    mainStr == pileStr ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
