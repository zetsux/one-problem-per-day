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
  int n = numget(), x[2], y[2], cur = 0;
  char a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = gc();
      if (a[i][j] == '*') {
        x[cur] = i; y[cur++] = j;
      }
    } gc();
  }

  if (x[0] == x[1]) {
    int tmp = x[0] + (x[0] > 0 ? -1 : 1);
    a[tmp][y[0]] = '*'; a[tmp][y[1]] = '*';
  } else if (y[0] == y[1]) {
    int tmp = y[0] + (y[0] > 0 ? -1 : 1);
    a[x[0]][tmp] = '*'; a[x[1]][tmp] = '*';
  } else {
    a[x[0]][y[1]] = '*'; a[x[1]][y[0]] = '*';
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) pc(a[i][j]);
    pc('\n');
  }
}
 
int main()
{
  int t = numget();
  while (t--) solve();
  return 0;
}