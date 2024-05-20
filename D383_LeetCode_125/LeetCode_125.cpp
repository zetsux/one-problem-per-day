#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int l = 0, r = s.length() - 1;
        for (int i = 0 ; i <= r ; i++) {
            if (isupper(s[i])) s[i] += 32;
        }

        while (l <= r) {
            while (l <= r && !isalnum(s[l])) l++;
            while (l <= r && !isalnum(s[r])) r--;
            if (l > r) return true;
            else if (s[l++] != s[r--]) return false;       
        } return true;
    }
};