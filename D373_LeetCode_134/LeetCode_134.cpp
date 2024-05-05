#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int n = gas.size(), totalDiff = 0, tank = 0, idx = 0;
        for (int i = 0; i < n; i++) {
            int diff = gas[i] - cost[i];
            totalDiff += diff;
            tank += diff;
            if (tank < 0) {
                tank = 0; idx = i + 1;
            }
        } return totalDiff < 0 ? -1 : idx;
    }
};