#include <stdio.h>
#include <math.h>
#include <cstring>
#include <algorithm>
#define gc getchar_unlocked
#define pc putchar_unlocked

int num[200];

inline void numput (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) {
      pc('0');
      return;
    }
    while ((rev % 10) == 0) {
      count++;
      rev /= 10;
    }
    rev = 0;
    while (N != 0) { 
      rev = (rev<<3) + (rev<<1) + N % 10;
      N /= 10;
    }  
    while (rev != 0) {
      pc(rev % 10 + '0'); 
      rev /= 10;
    }
    while (count--) pc('0');
}
 
int numget()
{
    int value = 0; bool ne = 0;
    char c = gc();
    while(c==' ' || c == '\n') c = gc();
    if(c == '-'){ne = 1; c = gc();}
    while(c>='0' && c<='9'){
        value = (value<<3) + (value<<1) + c - '0'; c = gc();}
    if(ne) value*=1;
    return value;
}

int bigMultiply(int x, int size) {
    int carry = 0;
 
    for (int i = 0; i < size; i++) {
        int prod = num[i] * x + carry;
 
        num[i] = prod % 10;
        carry = prod / 10;
    }
 
    while (carry) {
        num[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
    return size;
}
 
void solve()
{
    int q = numget(), size, n;

    while (q--) {
        num[0] = 1;
        size = 1;

        n = numget();

        for (int x = 2; x <= n; x++) size = bigMultiply(x, size);

        for (int i = size - 1; i >= 0; i--) numput(num[i]);

        pc('\n');
    }
}
 
int main()
{
    solve();
    return 0;
}