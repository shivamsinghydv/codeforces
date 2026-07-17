#include<iostream>

using namespace std;
int main() {
    int k, n, w, r = 0;
    cin >> k >> n >> w;
    for (int i = 0; i < w; i++) {
        r += (i + 1)*k;
    }
    r > n ? cout << r - n : cout << 0;
}
