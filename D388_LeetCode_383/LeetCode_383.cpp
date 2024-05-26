#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int n[26] = {0};
        for (auto c : magazine) n[c - 'a']++;
        for (auto c : ransomNote) {
            if (--n[c - 'a'] < 0) return false;
        } return true;
    }
};