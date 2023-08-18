#include <stdio.h>
#include <string.h>
#define gc getchar
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

int numget()
{
  int value = 0; bool ne = 0;
  char c = gc();
  while(c==' ' || c == '\n') c = gc();
  if(c == '-'){ne = 1; c = gc();}
  while(c>='0' && c<='9'){
      value = (value<<3) + (value<<1) + c - '0'; c = gc();}
  if(ne) value*=1;
  return value;
}

int countMinRot(int x, int y) {
  int a, b;
  if (x > y) {
    a = x - y;
    b = y + 10 - x;
  } else {
    a = y - x;
    b = x + 10 - y;
  }

  return (a > b ? b : a);
}

void solve()
{
  int n = numget(), tot = 0;
  char str1[1001], str2[1001];
  gets(str1);
  gets(str2);

  for (int i = 0; i < n; i++) tot += countMinRot(str1[i] - 48, str2[i] - 48);
  numput(tot);
}
 
int main()
{
  solve();
  return 0;
}