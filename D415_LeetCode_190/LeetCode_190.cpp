#include <algorithm>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        int sh = 31;
        while (n > 0) {
            if (n & 1) res += 1 << sh;
            sh--; n >>= 1;
        } return res;
    }
};