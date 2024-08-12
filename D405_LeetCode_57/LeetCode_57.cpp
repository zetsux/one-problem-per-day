#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int start = -1;
        for (auto i : intervals) {
            if (start == -1) {
                if (i[1] < newInterval[0]) {
                    res.push_back(i);
                    continue;
                } start = 1;

                if (i[0] <= newInterval[1]) {
                    newInterval = { min(newInterval[0], i[0]), max(newInterval[1], i[1]) };
                } else {
                    res.push_back(newInterval);
                    start = 0;
                    res.push_back(i);
                }
            } else if (start) {
                if (i[0] <= newInterval[1]) {
                    newInterval = { min(newInterval[0], i[0]), max(newInterval[1], i[1]) };
                } else {
                    res.push_back(newInterval);
                    start = 0;
                    res.push_back(i);
                }
            } else res.push_back(i);
        }

        if (start) res.push_back(newInterval);
        return res;
    }
};