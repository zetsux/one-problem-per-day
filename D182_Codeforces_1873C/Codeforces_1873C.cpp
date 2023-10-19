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

void solve()
{
  int t = numget();
  while (t--) {
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        if (gc() == 'X') {
          if (i == 0 || i == 9 || j == 0 || j == 9) cnt++;
          else if (i == 1 || i == 8 || j == 1 || j == 8) cnt += 2;
          else if (i == 2 || i == 7 || j == 2 || j == 7) cnt += 3;
          else if (i == 3 || i == 6 || j == 3 || j == 6) cnt += 4;
          else cnt += 5;
        }
      } gc();
    } numput(cnt);
  }
}
 
int main()
{
  solve();
  return 0;
}