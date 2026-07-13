#include<iostream>
#include<vector>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> res(n + 1);
    for (int i = 1; i <= n; i++) {
        int target;
        cin >> target;
        res[target] = i;
    }
    for (int i = 1; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}
