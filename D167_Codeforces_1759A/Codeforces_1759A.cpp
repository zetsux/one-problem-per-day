#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define gc getchar
#define pc putchar
#define ll long long
#define ull unsigned long long
#define PLUSIDX(x) (idx == 2 ? 0 : idx + 1)

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
    char str[51], yes[] = "Yes";
    gets(str);

    int idx = 0, flag = 1;
    char c = str[0];
    switch (c) {
      case 'Y':
        break;
      case 'e':
        idx = 1; break;
      case 's':
        idx = 2; break;
      default:
        puts("NO"); continue;
    }

    for (int i = 1; i < strlen(str); i++) {
      idx = PLUSIDX(idx);
      if (str[i] != yes[idx]) {
        flag = 0;
        break;
      }
    }

    if (flag) puts("YES");
    else puts("NO");
  }
}
 
int main()
{
  solve();
  return 0;
}