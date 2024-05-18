#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        string res[numRows];
        int x = 0, len = s.length(), row = numRows - 1, idx = 0;
        for (int i = 0; i < numRows ; i++) res[i] = "";

        bool flag = true;
        while (idx < s.length()) {
            res[x] += s[idx++];
            if (row) {
                x += (flag ? 1 : -1);
                if (x == 0) flag = true;
                else if (x == row) flag = false;
            }
        }

        string ans = "";
        for (int i = 0 ; i < numRows ; i++) ans += res[i];
        return ans;
    }
};