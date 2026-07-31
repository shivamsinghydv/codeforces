// Generic template for codeforces problems
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;

int main() {
    int n, numFaces = 0;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        if (s == "Tetrahedron") {
            numFaces += 4;
        }
        else if (s == "Cube") {
            numFaces += 6;
        }
        else if (s == "Octahedron") {
            numFaces += 8;
        }
        else if (s == "Dodecahedron") {
            numFaces += 12;
        }
        else if (s == "Icosahedron") {
            numFaces += 20;
        }
    }
    cout << numFaces;
    return 0;
}
