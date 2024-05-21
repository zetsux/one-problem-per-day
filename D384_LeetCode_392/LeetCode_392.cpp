#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int idx = 0, slen = s.length(), tlen = t.length();
        for (int i = 0 ; i < tlen && idx < slen ; i++) {
            if (t[i] == s[idx]) idx++;
        } return idx >= slen;
    }
};