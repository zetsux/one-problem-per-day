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
  int n = numget(), l = 0, r = 1000000000, arr[100], idx = 0;
  while (n--) {
    int a = numget(), x = numget();
    switch (a) {
      case 1:
        if (x > l) l = x;
        break;
      case 2:
        if (x < r) r = x;
        break;
      case 3:
        arr[idx++] = x;
    }
  }

  n = r - l + 1;
  for (int i = 0 ; i < idx ; i++) {
    if (arr[i] >= l && arr[i] <= r) n--;
  } numput(n < 0 ? 0 : n);
}

int main()
{
  int t = numget();
  while (t--) solve();
  return 0;
}