#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int lenA = a.length() - 1, lenB = b.length() - 1;

        int ext = 0;
        while (lenA >= 0 || lenB >= 0 || ext) {
            if (lenA >= 0) ext += (a[lenA--] - '0');
            if (lenB >= 0) ext += (b[lenB--] - '0');
            res = char((ext & 1) + '0') + res;
            ext >>= 1;
        }
        
        return res;
    }
};