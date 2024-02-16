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

bool solve()
{
  int n = numget(), sm1 = 0, sm2 = 0;
  int arr[n];
  for (int i = 0; i < n; i++) {
    arr[i] = numget();
    sm1 += arr[i];
  } sm1 /= n;
 
  int x = 0;
  for (int i = n - 1 ; i >= 0 ; i--) {
    sm2 += arr[i];
    x += sm1;
    if (sm2 > x) return false;
  } return true;
}

int main()
{
  int t = numget();
  while (t--) puts(solve() ? "YES" : "NO");
  return 0;
}