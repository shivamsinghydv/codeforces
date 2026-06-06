#include<iostream>

using namespace std;
int find_average(int arr[], int size) {
    int sum = 0, average = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum / size;
}
int main () {
    int t, n, average;
    cin >> t;
    int arr[n];
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            if (arr[0] > arr[j]) {
                average = find_average(arr, j + 1);
                int k = 0;
                while (k < j) {
                    if (average > arr[k]) {
                        arr[k] = average;
                    }
                    k--;
                }
            }
        }
    }
    for (int num : arr) {
    cout << num;
    }
}
