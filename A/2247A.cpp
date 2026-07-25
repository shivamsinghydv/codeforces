#include<iostream>
#include<vector>
#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        int sum = 0;
        cin >> n;
        vector<int> arr(n);
        For(0, n, i) {
            int k = 0;
            cin >> k;
            arr[i] = k;
        }
        if (n % 2 == 1) {
            cout << "NO" << "\n";
            continue;
        }
        For(0, n, i) {
            if(arr[i] == 1) {
                sum++;
            }
            else {
                sum--;
            }
        } 
        if (sum % 4 == 0) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }        
    }

}
