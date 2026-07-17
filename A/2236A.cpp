#include<iostream>
#include<vector>
using namespace std;

int find_xtremes(vector<int> arr) {
    int maxima = 1, minima = 20;
    for (int i = 0; i < arr.size(); i++) {
        maxima < arr[i] ? maxima = arr[i] : maxima = maxima;
        minima > arr[i] ? minima = arr[i] : minima = minima;
    }
    //cout << minima << maxima << endl;
    if (minima == maxima)
        return 1;
    return maxima - minima + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, buff;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            cin >> buff;
            arr.push_back(buff);
        }
        cout << find_xtremes(arr) << endl;
        
    }
}
