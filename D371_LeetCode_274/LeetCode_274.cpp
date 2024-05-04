#include <vector>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int h = citations.size();
        for (int i = 0; i < citations.size() ; i++) {
            if (citations[i] >= h--) return h + 1;
        } return citations[citations.size() - 1] != 0;
    }
};