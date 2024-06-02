#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int cnt[26] = {0};
        for (int i = 0 ; i < s.length() ; i++) {
            cnt[s[i] - 'a']++; cnt[t[i] - 'a']--;
        }

        for (int n : cnt) {
            if (n != 0) return false;
        } return true;
    }
};