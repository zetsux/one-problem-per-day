#include <vector>
using namespace std;

class Solution {
public:
    static bool compare(const vector<int> &a,const vector<int> &b){
        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compare);
        int curPos = points[0][1], cnt = 1;
        for (auto p : points) {
            if (p[0] <= curPos) continue;
            curPos = p[1]; cnt++;
        } return cnt;
    }
};