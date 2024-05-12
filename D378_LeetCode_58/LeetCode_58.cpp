#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int idx = s.length() - 1, cnt = 0;
        while (s[idx] == ' ') idx--;
        while (idx >= 0 && s[idx--] != ' ') cnt++;
        return cnt;
    }
};