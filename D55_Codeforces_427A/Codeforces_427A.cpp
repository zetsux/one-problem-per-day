#include <stdio.h>
#include <string.h>
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
  int n, p = 0, cnt = 0;
  scanf("%d", &n);

  while (n--) {
    int tmp;
    scanf("%d", &tmp);

    if (tmp < 0) {
        if (p > 0) p--;
        else cnt++;
    } else {
        p += tmp;
    }
  }

  numput(cnt);
}
 
int main()
{
  solve();
  return 0;
}