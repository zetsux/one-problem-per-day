#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size(), idx = 1;
        for (int i = 1 ; i < len ; i++) {
            if (nums[i] != nums[i - 1]) nums[idx++] = nums[i];
        } return idx;
    }
};