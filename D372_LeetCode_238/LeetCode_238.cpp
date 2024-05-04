#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int n = nums.size();
        vector<int> ans(n); ans[0] = 1;
        int nm = nums[0];
        for (int i = 1 ; i < n ; i++) {
            ans[i] = nm;
            nm *= nums[i];
        } nm = nums[n - 1];
        for (int i = n - 2; i >= 0 ; i--) {
            ans[i] *= nm;
            nm *= nums[i];
        } return ans;
    }
};