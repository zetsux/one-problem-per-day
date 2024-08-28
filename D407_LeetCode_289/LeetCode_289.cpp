#include <vector>
#define CHANGE1 2
#define CHANGE0 -1
using namespace std;

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size() - 1, m = board[0].size() - 1;
        for (int i = 0 ; i < board.size() ; i++) {
            for (int j = 0 ; j < board[0].size() ; j++) {
                int cnt = 0;
                if (i > 0) {
                    cnt += (board[i - 1][j] == 1 || board[i - 1][j] == CHANGE1);
                    if (j > 0) {
                        cnt += (board[i - 1][j - 1] == 1 || board[i - 1][j - 1] == CHANGE1);
                    }
                    if (j < m) {
                        cnt += (board[i - 1][j + 1] == 1 || board[i - 1][j + 1] == CHANGE1);
                    }
                }

                if (j > 0) {
                    cnt += (board[i][j - 1] == 1 || board[i][j - 1] == CHANGE1);
                    if (i < n) {
                        cnt += (board[i + 1][j - 1] == 1 || board[i + 1][j - 1] == CHANGE1);
                    }
                }

                if (i < n) {
                    cnt += (board[i + 1][j] == 1 || board[i + 1][j] == CHANGE1);
                    if (j < m) {
                        cnt += (board[i + 1][j + 1] == 1 || board[i + 1][j + 1] == CHANGE1);
                    }
                }

                if (j < m) {
                    cnt += (board[i][j + 1] == 1 || board[i][j + 1] == CHANGE1);
                }

                if (board[i][j] == 0 && cnt == 3) board[i][j] = CHANGE0;
                else if (board[i][j] == 1 && (cnt < 2 || cnt > 3)) board[i][j] = CHANGE1;
            }
        }

        for (int i = 0 ; i < board.size() ; i++) {
            for (int j = 0 ; j < board[0].size() ; j++) {
                if (board[i][j] == 2) board[i][j] = 0;
                else if (board[i][j] == -1) board[i][j] = 1;
            }
        }
    }
};