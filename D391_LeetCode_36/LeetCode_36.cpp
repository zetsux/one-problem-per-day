#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isValidCell(vector<vector<char>> &board, int i, int j, char nm) {
        for (int x = 0 ; x < 9 ; x++) {
            if (board[i][x] == nm || 
            board[x][j] == nm || 
            board[3*(i/3) + x/3][3*(j/3) + x%3] == nm) return false;
        } return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        for (int i = 0 ; i < 9 ; i++) {
            for (int j = 0 ; j < 9 ; j++) {
                if (board[i][j] != '.') {
                    char nm = board[i][j];
                    board[i][j] = '.';
                    if (!isValidCell(board, i, j, nm)) return false;
                    board[i][j] = nm;
                }
            }
        } return true;
    }
};