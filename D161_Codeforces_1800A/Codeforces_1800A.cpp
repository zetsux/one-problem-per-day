#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define gc getchar
#define pc putchar
#define ll long long

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
  if(ne) value*=1;
  return value;
}

int isSame(char c, char s) {
  return c == s || c == (s - 32);
}

void solve()
{
  int t = numget();
  while (t--) {
    int n = numget(), cur = -1, flag = 0;
    char arr[] = {'m', 'e', 'o', 'w'};
    char c = gc();
    for (int i = 0; i < 4; i++) {
      if (!isSame(c, arr[i])) {
        flag = 1;
        break;
      }
      while (isSame(c, arr[i]) && --n > 0) {c = gc();}
    }

    puts(flag || n > 0 ? "NO" : "YES");
    while (--n > 0) {c = gc();}
  }
}
 
int main()
{
  solve();
  return 0;
}