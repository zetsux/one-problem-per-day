#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int buy = prices[0], profit = 0;
        for (int i = 1 ; i < prices.size() ; i++) {
            if (prices[i] < buy) {
                buy = prices[i]; continue;
            } int diff = prices[i] - buy;
            if (diff > profit) profit = diff;
        } return profit;
    }
};