#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define gc getchar
#define pc putchar
#define ll long long
#define ull unsigned long long
#define MIN(x, y) (x < y ? x : y)

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

int countDiff(const char* str1, const char* str2, int n) {
  int cnt = 0;
  for (int i = 0; i < n; i++) cnt += (abs(str1[i] - str2[i]));
  return cnt;
}

void solve()
{
  int t = numget();
  while (t--) {
    int n = numget(), m = numget(), k = numget(), h = numget(), cnt = 0;
    while (n--) {
      int tmp = numget();
      tmp = abs(tmp - h);
      if (tmp && tmp % k == 0 && tmp / k < m) cnt++;
    }
    numput(cnt);
  }
}
 
int main()
{
  solve();
  return 0;
}