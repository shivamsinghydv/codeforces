// Generic template for codeforces problems
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i, s) for(int i = start; i < end; i+=s)
using namespace std;

void dragonHit(vector<bool> &isHit,int d, int s) {
    For (s - 1, d, i, s) {
        isHit[i] = true;
    }
}

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<bool> isHit(d, false);
    dragonHit(isHit, d, k);
    dragonHit(isHit, d, l);
    dragonHit(isHit, d, m);
    dragonHit(isHit, d, n);

    int numHit = 0;
    for (bool a : isHit) {
        if (a == true)
            numHit++;
    }
    cout << numHit << "\n";
    return 0;
}
