#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, counter = 0;
        string str, modstr = "";
        cin >> n >> k;
        cin >> str;
        bool allZero = true;
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            if (str[i] == '1') {
                counter += 1;
                allZero = false;
                arr.push_back(i);
            }
        }
        //:cout << counter;
        if (allZero) {
            cout << "YES" << endl;
        }
        else if (counter % 2 == 0) {
            vector<int> remainder_counts(k, 0);
            for (size_t i = 0; i < arr.size(); i++) {
                int original_index = arr[i];
                remainder_counts[original_index % k]++;
            }
             bool condition_met = true;
            for (int r = 0; r < k; r++) {
                if (remainder_counts[r] % 2 != 0) {
                    condition_met = false;
                    break;
                }
            }

            if (condition_met) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

        else {
            cout << "NO"<<endl;
        }

    }
}
