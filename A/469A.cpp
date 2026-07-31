#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int lilX, lilY;
    cin >> lilX;
    vector<bool> levels(n, false);
    for (int i = 0; i < lilX; i++) {
        int x;
        cin >> x;
        levels[x - 1] = true;
    }
    cin >> lilY;
    for (int i = 0; i < lilY; i++) {
        int y;
        cin >> y;
        levels[y - 1] = true;
    }
    for (bool level : levels) {
        if (level == false) {
            cout << "Oh, my keyboard!" << "\n";
            return 0;
        }
    }
    cout << "I become the guy." << "\n";
    return 0;

}
