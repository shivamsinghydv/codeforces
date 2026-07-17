#include<iostream>

using namespace std;

int main () {
    int numStops, minLength = 0, currPass = 0;
    cin >> numStops;
    int arr[numStops][2];
    for (int i = 0; i < numStops; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < numStops; i++) {
        currPass -= arr[i][0];
        currPass += arr[i][1];
        if (currPass > minLength)
            minLength = currPass;
    }
    cout << minLength;
}
