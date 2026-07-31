// Generic template for codeforces problems
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
void swap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {swap(a, b);}
    if (a > c) {swap(a, c);}
    if (b > c) {swap(b, c);}

    cout << (b-a) + (c-b) << endl;

    return 0;
}
