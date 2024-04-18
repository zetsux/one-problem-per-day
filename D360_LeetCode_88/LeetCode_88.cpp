#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int o = m-- + n-- - 1;
        while (n >= 0) {
            if (m >= 0 && nums1[m] > nums2[n]) nums1[o--] = nums1[m--];
            else nums1[o--] = nums2[n--];
        }
    }
};