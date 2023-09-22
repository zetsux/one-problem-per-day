#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define gc getchar
#define pc putchar
#define ull unsigned long long

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

void solve()
{
  int t = numget();
  while (t--) {
    int x = numget();
    int arr[x];
    for (int i = 0; i < x; i++) arr[i] = numget();

    int l = 0, r = x - 1, cnt = 0;
    while (arr[l] != 1 && l < x) l++;
    while (arr[r] != 1 && r >= 0) r--;
    while (l < r) cnt += (!arr[l++] + !arr[r--]);

    if (l == r) cnt += !arr[l];
    numput(cnt);
  }
}
 
int main()
{
  solve();
  return 0;
}