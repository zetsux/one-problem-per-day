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
  int arr[26] = {0};
  
  char str[1001];
  gets(str);

  int cnt = 0;
  for (int i = 1 ; i < strlen(str) - 1 ; i += 3) {
    int idx = str[i] - 'a';
    if (arr[idx] == 0) {
      cnt++;
      arr[idx] = 1;
    }
  }

  numput(cnt);
}
 
int main()
{
  solve();
  return 0;
}