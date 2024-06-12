#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (auto str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            map[sorted].push_back(str);
        }

        vector<vector<string>> res;
        for (auto p : map) {
            res.push_back(p.second);
        } return res;
    }
};