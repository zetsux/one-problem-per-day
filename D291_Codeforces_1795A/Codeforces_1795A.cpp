#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
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
  ll value = 0; int ne = 0;
  char c = gc();
  while(c==' ' || c == '\n') c = gc();
  if(c == '-'){ne = 1; c = gc();}
  while(c>='0' && c<='9'){
      value = (value<<3) + (value<<1) + c - '0'; c = gc();}
  if(ne) value*=-1;
  return value;
}

bool solve()
{
  int n = numget(), m = numget(), res = 0;
  char strn[n + 1], strm[m + 1];
  gets(strn); gets(strm);

  for (int i = 1; i < n; i++) {
    if (strn[i - 1] == strn[i]) {
      if (++res >= 2) return false;
    }
  } if (strn[n - 1] == strm[m - 1]) {
    if (++res >= 2) return false;
  } 
  
  for (int i = m - 2; i >= 0; i--) {
    if (strm[i + 1] == strm[i]) {
      if (++res >= 2) return false;
    }
  } return (res < 2);
}

int main()
{
  int t = numget();
  while (t--) puts(solve() ? "YES" : "NO");
  return 0;
}