#include <vector>
#include <set>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0, len = nums.size() - 1;
        set<vector<int>> res;
        for (int i = 0 ; i <= len ; i++) {
            int j = i + 1, k = len;
            while (j < k) {
                int sm = nums[i] + nums[j] + nums[k];
                if (sm == 0) res.insert({nums[i], nums[j++], nums[k--]});
                else if (sm > 0) k--;
                else j++;
            }
        } 
        
        vector<vector<int>> ans(res.begin(), res.end());
        return ans;
    }
};