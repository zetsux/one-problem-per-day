#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        string nm[4][10] = {
            {"","M","MM","MMM"},
            {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
            {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
            {"","I","II","III","IV","V","VI","VII","VIII","IX"}
        };
        int div[4] = {1000, 100, 10, 1};

        string res = "";
        for (int i = 0 ; i < 4 ; i++) {
            int n = num / div[i];
            num -= (n * div[i]);
            res += nm[i][n];
        } return res;
    }
};