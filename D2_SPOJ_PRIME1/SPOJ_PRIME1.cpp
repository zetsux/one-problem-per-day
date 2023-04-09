#include <stdio.h>
#include <math.h>
#include <cstring>
#include <algorithm>
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
 
void getPrimes(int low, int high)
{
    int cp[high - low + 1];
    memset(cp, 1, sizeof(cp));
 
    for (int p = 2; p * p <= high; p++)
    {
        int start = std::max(p * p, (low + p - 1) / p * p);
        for (int i = start; i <= high; i += p)
        {
            cp[i - low] = 0;
        }
    }
 
    if (low == 1) cp[0] = 0;
 
    int idx = 0, primes[high - low + 1];
    for (int i = low; i <= high; i++)
    {
        if (cp[i - low])
        {
            primes[idx] = i;
            idx++;
        }
    }
 
    for (int i = 0 ; i < idx ; i++) {
        numput(primes[i]);
    }
}
 
void solve()
{
    int q = numget();
    int a, b;
 
    while (q--)
    {
        a = numget();
        b = numget();
 
        getPrimes(a, b);
        puts("");
    }
}
 
int main()
{
    solve();
    return 0;
}