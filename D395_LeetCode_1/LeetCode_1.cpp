#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> check;

        for (int i = 0 ; i < nums.size() ; i++) {
            int rem = target - nums[i];
            if (check.find(rem) != check.end()) return {i, check[rem]};
            check[nums[i]] = i;
        } return {};
    }
};