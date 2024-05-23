#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        vector<int> res;
        while (l < r) {
            int sm = numbers[l] + numbers[r];
            if (sm == target) {
                res.push_back(l + 1); res.push_back(r + 1);
                return res;
            } else if (sm < target) l++;
            else r--;
        } return res;
    }
};