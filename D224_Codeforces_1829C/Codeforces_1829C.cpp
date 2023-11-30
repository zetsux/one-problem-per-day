#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#define gc getchar
#define pc putchar
#define ll long long
#define ull unsigned long long
#define MIN(x,y) (x < y ? x : y)
#define MX 400001

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
  int n = numget(), m1 = MX, m2 = MX, mn = MX;
  while (n--) {
    int x = numget();
    char str[3];
    gets(str);

    if (str[0] == '1' && str[1] == '1') {
      if (x < mn) mn = x;
    } else if (str[0] == '1') {
      if (x < m1) m1 = x;
    } else if (str[1] == '1') {
      if (x < m2) m2 = x;
    }
  } numput((mn != MX || (m1 != MX && m2 != MX)) ? MIN(mn, m1 + m2) : -1);
}
 
int main()
{
  int t = numget();
  while (t--) solve();
  return 0;
}