#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define gc getchar
#define pc putchar
#define ull unsigned long long

int a[2], b[2], f[2];

inline void numput (ull n)
{
  ull N = n, rev, count = 0;
  rev = N;
  if (N == 0) {
    pc('0'); 
    pc('\n'); 
    return;
  }
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

ull numget()
{
  ull value = 0; bool ne = 0;
  char c = gc();
  while(c==' ' || c == '\n') c = gc();
  if(c == '-'){ne = 1; c = gc();}
  while(c>='0' && c<='9'){
      value = (value<<3) + (value<<1) + c - '0'; c = gc();}
  if(ne) value*=1;
  return value;
}

int isObs(int n) {
    int m = (n ? 0 : 1);
    int mn = (a[m] > b[m] ? b[m] : a[m]);
    int mx = (mn == a[m] ? b[m] : a[m]);

    return mn < f[m] && f[m] < mx;
}

void solve()
{
  int n = numget();
  while (n--) {
    gc();
    for (int i = 0 ; i < 2 ; i++) a[i] = numget();
    for (int i = 0 ; i < 2 ; i++) b[i] = numget();
    for (int i = 0 ; i < 2 ; i++) f[i] = numget();

    int res = abs(a[0] - b[0]) + abs(a[1] - b[1]);
    if (a[0] == b[0] && a[0] == f[0]) {
        if (isObs(0)) res += 2;
    } else if (a[1] == b[1] && a[1] == f[1]) {
        if (isObs(1)) res += 2;
    }
    numput(res);
  }
}
 
int main()
{
  solve();
  return 0;
}