#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#define gc getchar
#define pc putchar
#define ll long long
#define ull unsigned long long

inline void numput (ll n)
{
  ll N = n, rev, count = 0;
  if (N == 0) {
    pc('0'); 
    pc('\n'); 
    return;
  }

  if (N < 0) {
    N = -N;
    pc('-');
  }
  rev = N;
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

ll numget()
{
  ll value = 0; bool ne = 0;
  char c = gc();
  while(c==' ' || c == '\n') c = gc();
  if(c == '-'){ne = 1; c = gc();}
  while(c>='0' && c<='9'){
      value = (value<<3) + (value<<1) + c - '0'; c = gc();}
  if(ne) value*=-1;
  return value;
}

int gcd(int a, int b)
{
  if (a == b || a == 0) return b;
  if (b == 0) return a;

  if (~a & 1) return (b & 1 ? (gcd(a >> 1, b)) : (gcd(a >> 1, b >> 1) << 1));
  if (~b & 1) return gcd(a, b >> 1);

  if (a > b) return gcd((a - b) >> 1, b);
  return gcd((b - a) >> 1, a);
}

int solve()
{
  int a = numget(), b = numget(), s = numget();
  while (s > 0) {
    int tmp = gcd(a, s);
    if (tmp > s) return 1;
    else s -= tmp;
    
    tmp = gcd(b, s);
    if (tmp > s) return 0;
    else s -= tmp;
  }
}
 
int main()
{
  numput(solve());
  return 0;
}