#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        unordered_map<int, int> check;
        for (int i = 0 ; i < nums.size() ; i++) {
            if (check.count(nums[i])) {
                if (i - check[nums[i]] <= k) return true;
            } check[nums[i]] = i;
        } return false;
    }
};