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

void solve()
{
  int n = numget();
  int tm[2][n];

  for (int i = 0; i < n; i++) tm[0][i] = numget();
  for (int i = 0; i < n; i++) tm[1][i] = numget();

  numput(tm[1][0] - tm[0][0]);
  for (int i = 1; i < n; i++) numput(tm[1][i] - (tm[0][i] >= tm[1][i - 1] ? tm[0][i] : tm[1][i - 1]));
  pc('\n');
}
 
int main()
{
  int t = numget();
  while (t--) solve();
  return 0;
}