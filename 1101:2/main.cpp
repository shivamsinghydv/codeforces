#include <iostream>

using namespace std;

int solve(int n, int k) {
    int popcount = 0;
    int curr_bit = 1;

    while (n >= (k * curr_bit)) {
        popcount += k;
        n -= k * curr_bit;
        curr_bit *= 2;
    }
    
    popcount += (n/curr_bit);
    return popcount;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        uint32_t n, k;
        if (cin >> n >> k) {
            cout << solve(n, k) << "\n";
        }
    }
}
