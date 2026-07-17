#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool isHard = false, arr[n];
    while (n) {
        cin >> arr[n];
        if (arr[n] == 1)
            isHard = true;
    n--;
    }
    isHard ? cout << "HARD" : cout << "EASY";
}
