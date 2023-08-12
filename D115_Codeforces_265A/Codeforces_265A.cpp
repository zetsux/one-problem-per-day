#include <stdio.h>
#include <string.h>
#define pc putchar
#define ull unsigned long long

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
  char s[51], t[51];
  gets(s);
  gets(t);

  int pos = 0;
  for (int i = 0 ; i < strlen(t) ; i++) {
    if (t[i] == s[pos]) pos++;
  }
  numput(pos + 1);
}
 
int main()
{
  solve();
  return 0;
}