#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int cnt[s.length()];
        for (int i = 0 ; i < s.length() ; i++) {
            switch(s[i]){
                case 'I':
                    cnt[i] = 1; break;
                case 'V':
                    cnt[i] = 5; break;
                case 'X':
                    cnt[i] = 10; break;
                case 'L':
                    cnt[i] = 50; break;
                case 'C':
                    cnt[i] = 100; break;
                case 'D':
                    cnt[i] = 500; break;
                case 'M':
                    cnt[i] = 1000;
            }
        }

        int res = cnt[0];
        for (int i = 1 ; i < s.length() ; i++) {
            if (cnt[i] > cnt[i - 1]) res += (cnt[i] - (2 * (cnt[i] <= 10 ? 1 : (cnt[i] <= 100 ? 10 : 100))));
            else res += cnt[i];
        } return res;
    }
};