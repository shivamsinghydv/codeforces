// Generic template for codeforces problems
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalDrink = k * l;
    int totalLime = c * d;
    int counter = 0;
    For(0, 1000, i){
        // for one toast, nl of drink, one slice of lime, np gram of salt
        if (totalDrink - nl >= 0) {totalDrink -= nl;}    else {break;}
        if (totalLime - 1>= 0) {totalLime -= 1;}         else {break;}
        if (p - np >= 0) {p -= np;}                      else {break;}
        counter++;
    }
    cout << counter / n << endl;
    return 0;
}
