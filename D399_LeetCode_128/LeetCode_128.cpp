#include <vector>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt, mx;
        cnt = mx = nums.size() > 0;
        for (int i = 1 ; i < nums.size() ; i++) {
            if (nums[i] == nums[i - 1]) continue;
            else if (nums[i] - 1 == nums[i - 1]) cnt++;
            else {
                mx = max(mx, cnt);
                cnt = 1;
            }
        } return max(mx, cnt);
    }
};