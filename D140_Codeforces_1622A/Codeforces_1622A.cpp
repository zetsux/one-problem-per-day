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
    int arr[3], mx = 0, sum = 0;
    for (int i = 0; i < 3; i++) {
      arr[i] = numget();
      if (arr[i] > mx) mx = arr[i];
      sum += arr[i];
    }

    if (((arr[0] == arr[1] && !(arr[2] & 1)) || (arr[1] == arr[2] && !(arr[0] & 1)) 
      || (arr[0] == arr[2] && !(arr[1] & 1))) || sum == mx + mx) puts("YES");
    else puts("NO");
  }
}
 
int main()
{
  solve();
  return 0;
}