#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int l = 0, r = height.size() - 1, res = 0;
        while (l < r) {
            int size;
            if (height[l] < height[r]) size = height[l++];
            else size = height[r--];

            size *= (r - l + 1);
            if (size > res) res = size;
        } return res;
    }
};