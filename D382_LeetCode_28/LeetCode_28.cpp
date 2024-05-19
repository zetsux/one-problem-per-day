#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t isFound = haystack.find(needle);
        return (isFound != string::npos ? isFound : -1);
    }
};