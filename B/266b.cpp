#include<iostream>

using namespace std;

int main () {
    int n, t;
    string orderCanteen;
    cin >> n >> t;
    cin >> orderCanteen;
    if (orderCanteen.size() != n)
        return 0;
    
    while (t) {
        for (int i = 0; i < orderCanteen.size(); i++) {
            if (orderCanteen[i] == 'B' && orderCanteen[i+1] == 'G') {
                swap(orderCanteen[i], orderCanteen[i + 1]);
                i++;
            }
            else if (i == (orderCanteen.size() - 1) && orderCanteen[i] == 'B') {
                orderCanteen[i] = 'B';
            }
        }
    t--;
    }
    cout << orderCanteen;
}
