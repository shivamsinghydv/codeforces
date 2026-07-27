#include <iostream>

using ll = long long;
using namespace std;

int calculateTiles(ll n, ll a) {
    ll num_tiles = 0;
    if (n % a == 0) {
        num_tiles = n / a;
    }
    else {
        num_tiles = (n / a) + 1;
    }
    return num_tiles;
}

int main() {
    ll n, m, a;
    cin >> n >> m >> a;
    ll lengthWise = calculateTiles(m, a);
    ll breadthWise = calculateTiles(n, a);
    cout << lengthWise * breadthWise << "\n";

    return 0;
}
