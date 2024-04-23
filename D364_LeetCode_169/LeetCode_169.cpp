#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res, cnt = 0;
        for (int &nm : nums) {
            if (!cnt) res = nm;
            if (nm == res) cnt++;
            else cnt--;
        } return res;
    }
};