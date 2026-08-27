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
        vector<long long> arr(n);
        map<long long, int> freq;
        long long sum = 0;
        int max_freq = 0;
        long long max_val = 0;

        For (0, n, i) {
            cin >> arr[i];
            sum += arr[i];
            freq[arr[i]]++;
            if (freq[arr[i]] > max_freq) {
                max_freq = freq[arr[i]];
                max_val = arr[i];
            }
        }
        int freqOthers = n - max_freq;
        
        if (max_freq > freqOthers + 2) {
            int cardsWasted = max_freq - freqOthers - 2;
            sum -= cardsWasted*max_val;
        }
        cout << sum << "\n";
    }
    return 0;
}
