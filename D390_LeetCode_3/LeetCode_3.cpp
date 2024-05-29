#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int cnt[127] = {0}, l = 0, r = 0, ln = s.length(), res = 0;
        while (r < ln) {
            cnt[s[r]]++;
            while (cnt[s[r]] > 1 && l <= r) {
                cnt[s[l++]]--;
            } res = max(res, r++ - l + 1);
        } return res;
    }
};