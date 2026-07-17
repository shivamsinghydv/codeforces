#include<iostream>
#include<set>

using namespace std;

int main() {
    int year;
    cin  >> year;
    for (int i = 1; i < 1000; i++) {
        year++;
        int arr[4];
        int yr = year;
        set<int> yrSet;
        while (yr) {
            yrSet.insert(yr % 10);
            yr /= 10;
        } 
        if (yrSet.size() == 4){
        cout << year;
        return 0;
        }
    }
}
