#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        for (auto str : strs) {
            int i = 0;
            for ( ; i < res.size() ; i++) {
                int cnt[26] = {0}, isAnagram = true;
                if (res[i][0].length() != str.length()) continue;

                for (auto c : res[i][0]) cnt[c - 'a']++;
                for (auto c : str) {
                    if (--cnt[c - 'a'] < 0) {
                        isAnagram = false; break;
                    }
                } if (isAnagram) break;
            }

            if (i < res.size()) res[i].push_back(str);
            else {
                vector<string> x;
                x.push_back(str);
                res.push_back(x);
            }
        } return res;
    }
};