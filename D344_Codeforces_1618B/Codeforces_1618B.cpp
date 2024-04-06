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
  int n = numget() - 2, flag = 0;
  char str[n * 2 + 1];
  scanf("%s", str);

  for (int i = 1 ; i < n ; i++) {
    char s[3];
    scanf("%s", s);

    if (str[strlen(str) - 1] == s[0]) {
      s[0] = s[1];
      s[1] = '\0';
    } else flag = 1;
    strcat(str, s);
  } if (!flag) pc('a'); puts(str);
}

int main()
{
  int t = numget();
  while (t--) solve();
  return 0;
}