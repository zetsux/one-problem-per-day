#include <stdio.h>
#include <math.h>
#define gc getchar
#define ll long long
#define ull unsigned long long
#define pc putchar
 
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
    pc(' ');
}
 
ull numget()
{
    ull value = 0; bool ne = 0;
    char c = gc();
    while(c==' ' || c == '\n') c = gc();
    if(c == '-'){ne = 1; c = gc();}
    while(c>='0' && c<='9'){
        value = (value<<3) + (value<<1) + c - '0'; c = gc();}
    if(ne) value*=1;
    return value;
}
 
void solve()
{
    int q = numget(), n;
    ull a1, a2, a3;
    
    while (q--) {
        a1 = numget();
        a2 = numget();

        for (int i = 0; i < 4; i++) numget();

        a3 = numget();

        numput(a1);
        numput(a2);
        numput(a3 - a1 - a2);
        puts("");
    }
}
 
int main()
{
    solve();
    return 0;
}