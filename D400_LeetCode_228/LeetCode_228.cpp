#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.empty()) return res;

        int cur = nums[0], bound = nums[0];
        for (int i = 1 ; i < nums.size() ; i++) {
            if (nums[i] - 1 != cur) {
                if (cur == bound) res.push_back(to_string(cur));
                else res.push_back(to_string(bound) + "->" + to_string(cur));
                bound = nums[i];
            } cur = nums[i];
        }

        if (cur == bound) res.push_back(to_string(cur));
        else res.push_back(to_string(bound) + "->" + to_string(cur));
        return res;
    }
};