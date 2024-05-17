#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        string res = "";
        reverse(s.begin(), s.end());

        int i = 0, len = s.length(), cur = 0;
        while (i < len && s[i] == ' ') i++;
        while (i < len) {
            if (s[i] == ' ') {
                if (s[i - 1] != ' ') {
                    reverse(res.begin() + cur, res.end());
                    res += ' ';
                    cur = res.length();
                }
            } else res += s[i];

            i++;
        } if (s[len - 1] != ' ') reverse(res.begin() + cur, res.end());
        while (res[res.length() - 1] == ' ') res.pop_back();
        return res;
    }
};