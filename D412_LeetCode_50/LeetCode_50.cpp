#include <algorithm>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n < 0) {
            x = 1 / x;
            n = abs(n);
        }

        double ans = 1;
        while (n) {
            if (n & 1) ans *= x;
            x *= x;
            n >>= 1;
        } return ans;
    }
};