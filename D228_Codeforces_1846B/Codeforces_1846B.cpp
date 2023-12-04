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
  char x[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0 ; j < 3 ; j++) x[i][j] = gc();
    gc();
  }

  for (int i = 0; i < 3; i++) {
    if (x[0][i] == x[1][i] && x[1][i] == x[2][i] && x[0][i] != '.') {
      pc(x[0][i]); pc('\n'); return;
    } else if (x[i][0] == x[i][1] && x[i][1] == x[i][2] && x[i][0] != '.') {
      pc(x[i][0]); pc('\n'); return;
    }
  }

  if (x[1][1] != '.' && 
  ((x[0][0] == x[1][1] && x[1][1] == x[2][2]) || 
  (x[2][0] == x[1][1] && x[1][1] == x[0][2]))) {
    pc(x[1][1]); pc('\n'); 
  } else puts("DRAW");
}
 
int main()
{
  int t = numget();
  while (t--) solve();
  return 0;
}