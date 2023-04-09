#include <stdio.h>
#include <math.h>
#define gc getchar_unlocked
#define ll long long
#define ull unsigned long long
#define pc putchar_unlocked
 
inline void numput (ull n)
{
    ull N = n, rev, count = 0;
    rev = N;
    if (N == 0) {
      pc('0'); 
      pc('\n'); 
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
    pc('\n');
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
 
int digRev(int num)
{
    int res = 0;
    while (num > 0) {
        res = res * 10 + num % 10;
        num /= 10;
    }
    return res;
}
 
void solve()
{
    int q = numget();
    int a, b;
 
    while (q--) {
        scanf("%d%d", &a, &b);
 
        numput(digRev(digRev(a) + digRev(b)));
    }
}
 
int main()
{
    solve();
    return 0;
}  