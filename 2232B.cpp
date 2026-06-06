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
    int t, n, average, original_first;
    string final_string = "";
    cin >> t;
    for (int i = 0; i < t; i++) {
        string out_string = "";
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                original_first = arr[0];
            }
            cin >> arr[j];
            average = find_average(arr, j + 1);
            int k = 0;
            while (k <= j) {
            if (average > arr[k]) {
                arr[k] = average;
            }
            k++;
            }
        }
    
        for (int num : arr) {
            out_string = out_string + to_string(num) + " ";
            //cout << num << " ";
        }
        final_string = final_string + out_string + "\n";
    }
    cout << final_string;
}
