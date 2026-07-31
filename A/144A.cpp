#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr;
    int mx = 0, mn = 101, indexmn, indexmx;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > mx) {
            mx = arr[i];
            indexmx = i;
        }
        if (arr[i] <= mn) {
            mn = arr[i];
            indexmn = i;
        }
    }
    if (indexmx > indexmn) {
        //time for mx = indexmx 
        //time for mn = size - indexmn + 1
        cout << indexmx + arr.size() - indexmn - 2 << "\n";
    }
    else {
        // Time for mx =  indexmx
        // Time of mn = 
        cout << indexmx + arr.size() - indexmn - 1 << "\n";
    }
    return 0;
}
