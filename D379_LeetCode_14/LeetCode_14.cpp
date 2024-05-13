#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        string res = "";
        int min = 201;
        for (int i = 0 ; i < strs.size() ; i++) {
            int len = strs[i].length();
            if (len < min) min = len;
        }

        int idx = -1;
        while (++idx < min) {
            char c = strs[0][idx];
            for (int i = 1 ; i < strs.size() ; i++) {
                if (c != strs[i][idx]) return res;
            } res += c;
        } return res;
    }
};