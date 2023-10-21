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
    int arr[3] = {0}, flag = 1;
    for (int i = 0 ; i < 6 ; i++) {
      char c = gc();
      switch (c) {
        case 'r':
          arr[0] = 1; break;
        case 'g':
          arr[1] = 1; break;
        case 'b':
          arr[2] = 1; break;
        case 'R':
          flag = (!flag ? 0 : arr[0]); break;
        case 'G':
          flag = (!flag ? 0 : arr[1]); break;
        case 'B':
          flag = (!flag ? 0 : arr[2]);
      }
    } puts(flag ? "YES" : "NO"); gc();
  }
}
 
int main()
{
  solve();
  return 0;
}