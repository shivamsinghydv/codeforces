#include<iostream>

using namespace std;

int main() {
    int n, res = 0;
    int prev = false;
    cin >> n;

    while (n--) {
        int i;
        cin >> i;
        if (i != prev) {
            prev = i;
            res++;
        }
    }
    cout << res << "\n";
}
