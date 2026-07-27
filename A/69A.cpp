#include <iostream>
#include <vector>
using namespace std;
int delta(vector<int> x) {
    int sum = 0;
    for (int s : x) {
        sum += s;
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> z(n);
    for (int i = 0; i < n; i++) {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        x[i] = a;
        y[i] = b;
        z[i] = c;
    }
    // calculate delta of x, y & z;
    int delX = delta(x);
    int delY = delta(y);
    int delZ = delta(z);
    if (delX == 0 && delY == 0 && delZ == 0) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }    

    return 0; 
}
