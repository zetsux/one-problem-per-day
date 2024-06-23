#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int l = 0, r = matrix[0].size() - 1, b = matrix.size() - 1, t = 0;
        int i = 0, j = 0, cnt = matrix[0].size() * matrix.size();
        while (res.size() < cnt) {
            for (int k = l ; k <= r; k++) {
                res.push_back(matrix[t][k]);
            } t++;

            for (int k = t ; k <= b; k++) {
                res.push_back(matrix[k][r]);
            } r--;

            if (t <= b) {
                for (int k = r ; k >= l; k--) {
                    res.push_back(matrix[b][k]);
                } b--;
            }
            if (l <= r) {
                for (int k = b ; k >= t; k--) {
                    res.push_back(matrix[k][l]);
                } l++;
            }
        } return res;
    }
};