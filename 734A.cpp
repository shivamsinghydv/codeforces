#include<iostream>
#include<string>
using namespace std;

int main() {
    int numberOfGames, wAnton = 0, wDanik = 0;
    string record;
    cin >> numberOfGames;
    cin >> record;
    for (int i = 0; i < numberOfGames; i++) {
        if (record[i] == 'A') {
            wAnton++;
        }
        else if (record[i] == 'D') {
            wDanik++;
        }
    }
    if (wAnton > wDanik) {
        cout << "Anton";
    }
    else if (wAnton < wDanik) {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }
    //cout << "Danik: " << wDanik << "Anton: " << wAnton;
}
