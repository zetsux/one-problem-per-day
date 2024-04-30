#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int len = nums.size() - 1;
        for (int i = 0 ; i < len ; i++) {
            if (nums[i] != 0) continue;
            int j = i, flag = 1;
            while (j--) {
                if (nums[j] > (i - j)) flag = 0;
            } if (flag) return false;
        } return true;
    }
};