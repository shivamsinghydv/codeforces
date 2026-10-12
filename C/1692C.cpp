// codeforces solutions
// Author: @shivamsinghydv
#include <bits/stdc++.h>

#define For(start, end, i) for(int i = start; i < end; i++)
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        vector<string> chessBoard(8);

        for (auto &row : chessBoard) {
            cin >> row;
        }

        int c_1 = 0, c_2 = 0;
        // cout << "INPUT READ SUCCESSFULLY" << endl;
        for (int i = 1; i < 7; i++) {
            for (int j = 1; j < 7; j++) {
                if ((chessBoard[i][j] == '#') && 
                    (chessBoard[i + 1][j + 1] == '#') &&
                    (chessBoard[i - 1][j - 1] == '#') &&
                    (chessBoard[i - 1][j + 1] == '#') && 
                    (chessBoard[i + 1][j - 1] == '#')){
                    cout << i + 1 << " " << j + 1 << "\n";
                }
            }
        }
    }

    return 0;
}
