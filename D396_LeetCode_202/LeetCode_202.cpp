class Solution {
public:
    int squareSum(int n) {
        int sm = 0, tmp;
        while (n) {
            tmp = n % 10;
            sm += (tmp * tmp);
            n /= 10;
        } return sm;
    }

    bool isHappy(int n) {
        int next = n, next2 = squareSum(n);
        while (next != next2) {
            next = squareSum(next);
            next2 = squareSum(squareSum(next2));
        } return next == 1;
    }
};