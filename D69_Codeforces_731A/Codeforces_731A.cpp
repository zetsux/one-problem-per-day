#include <stdio.h>
#include <string.h>
#include <math.h>
#define pc putchar

inline void numput (int n)
{
  int N = n, rev, count = 0;
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
 
void solve()
{
  char str[101], cur = 'a';
  scanf("%s", str);

  int cnt = 0;
  for (int i = 0 ; i < strlen(str) ; i++) {
    int x = abs(str[i] - cur);
    cnt += (x < (26 - x) ? x : (26 - x));
    cur = str[i];
  }

  numput(cnt);
}
 
int main()
{
  solve();
  return 0;
}