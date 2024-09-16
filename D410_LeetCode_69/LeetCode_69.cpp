using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int l = 1, r = x, ans = 0;
        while (l <= r) {
            int m = l + (r - l) / 2;
            int check = x / m;

            if (m == check) return m;
            else if (m < check) {
                l = m + 1;
                ans = m;
            } else r = m - 1;
        } return ans;
    }
};