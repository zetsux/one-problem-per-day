#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int len = s.length(), sCheck[150] = {0}, tCheck[150] = {0}, curS = -1, curT = -1;
        for (int i = 0 ; i < len ; i++) {
            int sIdx = s[i], tIdx = t[i];
            if (sCheck[sIdx] == 0) sCheck[sIdx] = curS--;
            if (tCheck[tIdx] == 0) tCheck[tIdx] = curT--;

            if (sCheck[sIdx] != tCheck[tIdx]) return false;
        } return true;
    }
};