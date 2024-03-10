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

// Binary Search
bool isSquare(ll n)
{
  ll l = 1, r = 1e9;
  while (l <= r) {
    ll md = l + (r - l) / 2;

    if ((md * md) == n) return true;
    else if ((md * md) < n) l = md + 1;
    else r = md - 1;
  } return false;
}

bool solve()
{
  ll n = numget(), sm = 0;
  for (int i = 0 ; i < n ; i++) sm += numget();
  return isSquare(sm);
}

int main()
{
  int t = numget();
  while (t--) puts(solve() ? "YES" : "NO");
  return 0;
}