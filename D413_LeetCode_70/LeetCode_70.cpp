class Solution {
public:
    int climbStairs(int n) {
        int prev = 1, cur = 1;
        for (int i = 2 ; i <= n ; i++) {
            int tmp = cur;
            cur = prev + cur;
            prev = tmp;
        } return cur;
    }
};