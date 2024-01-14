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
  int n = numget(), cnt = 0;
  char a1[n + 1], a2[n + 1];
  gets(a1);
  gets(a2);

  if (a2[0] == '1') {
    if (a1[0] == '0') {
      a1[0] = '2'; cnt++;
    } else if (a1[1] == '1') {
      a1[1] = '2'; cnt++;
    }
  }

  int ln = n - 1;
  for (int i = 1; i < ln; i++) {
    if (a2[i] == '1') {
      if (a1[i - 1] == '1') {
        a1[i - 1] = '2'; cnt++;
      } else if (a1[i] == '0') {
        a1[i] = '2'; cnt++;
      } else if (a1[i + 1] == '1') {
        a1[i + 1] = '2'; cnt++;
      }
    }
  }

  if (a2[ln] == '1') {
    if (a1[ln] == '0') {
      a1[ln] = '2'; cnt++;
    } else if (a1[ln - 1] == '1') {
      a1[ln - 1] = '2'; cnt++;
    }
  }

  numput(cnt);
}

int main()
{
  int t = numget();
  while (t--) solve();
  return 0;
}