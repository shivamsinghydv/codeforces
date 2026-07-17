#include<iostream>
#include<set>

using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int counter = 0;
    set<int> colors;
    int c;
    while (cin >> c) {
        if (colors.find(c) != colors.end())
            counter++;
        colors.insert(c);
    }
    cout << counter;
}
