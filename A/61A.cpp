#include<iostream>
#include<vector>

using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); ++i)

int main() {
    
    string as, bs;
    cin >> as;
    cin >> bs;
    int lengthString = as.length();
    vector<bool> a(lengthString, false);
    vector<bool> b(lengthString, false);
    vector<bool> res(lengthString,false);

    FOR (i, 0, lengthString) {
        a[i] = as[i];
    }
    FOR (i, 0, lengthString) {
        b[i] = bs[i];
    }

    FOR (i, 0, lengthString){
        res[i] = as[i] ^ bs[i];
    }
    FOR (i, 0, lengthString) {
        cout << res[i];
    }


}
