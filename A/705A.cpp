#include <iostream> 

using namespace std;

int main() {
    int n;
    cin >> n;
    string str1 = "I hate ";
    string str2 = "I love ";
    string joint = "that ";
    string ending = "it";
    string final = "";
    for (int i = 0; i < n; i++) {
        if (i % 2) {
            final += str2;
        }
        else {
            final += str1;
        }

        if (i != n -1) {
            final += joint;
        }
        else {
            final += ending;
        }
    }
    cout << final <<  "\n";
    return 0;
}
