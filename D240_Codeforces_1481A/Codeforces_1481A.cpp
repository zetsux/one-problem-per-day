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
    pc(' '); 
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
  pc(' ');
}

ll numget()
{
  ll value = 0; int ne = 0;
  char c = gc();
  while(c==' ' || c == '\n') c = gc();
  if(c == '-'){ne = 1; c = gc();}
  while(c>='0' && c<='9'){
      value = (value<<3) + (value<<1) + c - '0'; c = gc();}
  if(ne) value*=-1;
  return value;
}

int solve()
{
  int xd = numget(), yd = numget(), x = 0, y = 0;
  int cnt[4] = {0};

  char c = gc();
  while (c != '\n') {
    switch (c) {
      case 'R' :
        cnt[0]++; break;
      case 'L' :
        cnt[1]++; break;
      case 'U' :
        cnt[2]++; break;
      case 'D' :
        cnt[3]++; break;
    } c = gc();
  }

  if (xd > x) {
    if (cnt[0] < (xd - x)) return 0;
  } else if (xd < x) {
    if (cnt[1] < (x - xd)) return 0;
  }

  if (yd > y) {
    if (cnt[2] < (yd - y)) return 0;
  } else if (yd < y) {
    if (cnt[3] < (y - yd)) return 0;
  }

  return 1;
}
 
int main()
{
  int t = numget();
  while (t--) puts(solve() ? "YES" : "NO");
  return 0;
}