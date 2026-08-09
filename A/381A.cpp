// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> arr(n);

    For (0, n, i) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    bool serejaTurn = true;
    while (left <= right) {
        int chosenCard;
        if (arr[left] > arr[right]) {
            chosenCard = arr[left];
            left++;
        }
        else {
            chosenCard = arr[right];
            right--;
        }

        if (serejaTurn) {
            sereja += chosenCard;
        }
        else {
            dima += chosenCard;
        }
        serejaTurn =  !serejaTurn;
    }
    cout << sereja << " " << dima << "\n";
    return 0;
}
