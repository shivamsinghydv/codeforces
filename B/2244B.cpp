#include<iostream>
#include<vector>

using namespace std;

#define For(i, start, end) for(int i = start; i < end; i++)

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> bookStack(n);
        For(l, 0, n) {
            cin >> bookStack[l];
        }
        For(i, 0, n) {
            if (i < bookStack.size()) {
                cout << "NO" << "\n";
            }
            else {
                cout << "YES" << "\n";
            }
        }
    }
    
}
