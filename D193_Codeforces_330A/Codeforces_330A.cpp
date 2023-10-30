#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
  int n = numget(), m = numget(), cnt = 0;
  char arr[n][m];

  for (int i = 0; i < n; i++) gets(arr[i]);
  
  for (int i = 0; i < n; i++) {
    int flag = 0;
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 'S') {
        flag = 1;
        break;
      }
    } if (flag) {
      for (int j = 0; j < m; j++) arr[i][j] = (arr[i][j] == 'S' ? 'S' : '0');
    }
  }

  for (int i = 0; i < m; i++) {
    int flag = 0;
    for (int j = 0; j < n; j++) {
      if (arr[j][i] == 'S') {
        flag = 1;
        break;
      }
    } if (flag) {
      for (int j = 0; j < n; j++) cnt += (arr[j][i] == '0' || arr[j][i] == 'S');
    }
  } numput(n * m - cnt);
}
 
int main()
{
  solve();
  return 0;
}