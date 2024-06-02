#include <string>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int len = pattern.length(), pCheck[26] = {0}, curP = -1, curS = -1, sIdx = 0, sLen = s.length();
        map<string, int> sCheck;

        int wordCnt = 1;
        for (auto c : s) {
            if (c == ' ') wordCnt++;
        } if (wordCnt != len) return false;

        for (int i = 0 ; i < len ; i++) {
            int pIdx = pattern[i] - 'a';
            if (pCheck[pIdx] == 0) pCheck[pIdx] = curP--;

            string x = "";
            while (sIdx < sLen && s[sIdx] != ' ') x += s[sIdx++];
            sIdx++;
            if (sCheck.find(x) == sCheck.end()) sCheck[x] = curS--;

            if (pCheck[pIdx] != sCheck[x]) return false;
        } return true;
    }
};