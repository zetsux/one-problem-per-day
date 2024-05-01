#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        for (int i = 1 ; i < nums.size() ; i++) nums[i] = max(nums[i] + i, nums[i - 1]);
        int idx = 0, res = 0, ln = nums.size() - 1;
        while (idx < ln) {
            res++;
            idx = nums[idx];
        } return res;
    }
};