#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 2;
        for (int i = 2 ; i < nums.size() ; i++) {
            if (nums[i] != nums[idx - 2]) nums[idx++] = nums[i];
        } return nums.size() == 1 ? 1 : idx;
    }
};