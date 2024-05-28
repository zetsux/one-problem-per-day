#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int i = 0, j = 0, sz = nums.size(), sm = 0, mn = 123456;
        while (i < sz) {
            sm += nums[i];
            while (sm >= target) {
                mn = min(mn, i - j + 1);
                sm -= nums[j++];
            } i++;
        } return mn == 123456 ? 0 : mn;
    }
};