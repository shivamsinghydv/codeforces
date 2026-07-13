#include<iostream>
#include<set>
using namespace std;

bool hasElement(set<int> a, int key) {
    if (a.find(key) != a.end()) 
        return  true;
    else
        return false;
}

int main() {
    int counter = 0;
    set<int> colors;
    int c;
    while (cin >> c) {
        if (hasElement(colors, c))
            counter++;
        colors.insert(c);
    }
    cout << counter;
}
