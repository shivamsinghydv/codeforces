#include<iostream>

using namespace std;

int main () {
    int numFriends, fenceHeight;
    int bends = 0;
    cin >> numFriends >> fenceHeight;
    int arr[numFriends];
    for (int i = 0; i < numFriends; i++) {
        cin >> arr[i];
    }
    for (int n : arr) {
        if (n > fenceHeight)
            bends++;
    }
    cout << bends + numFriends;

}
