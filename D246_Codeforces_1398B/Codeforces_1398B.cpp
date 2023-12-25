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
  int cnt1 = 0, arr[50] = {0}, cur = 0, a = 0, b = 0;
  char c = gc();
  while (c != '\n') {
    if (c == '1') cnt1++;
    else {
      if (cnt1) arr[cur++] = cnt1;
      cnt1 = 0;
    } c = gc();
  } if (cnt1) arr[cur++] = cnt1;

  std::sort(arr, arr + cur);
  for (int i = cur - 1; i >= 0; i -= 2) a += arr[i];
  numput(a);
}
 
int main()
{
  int t = numget();
  while (t--) solve();
  return 0;
}