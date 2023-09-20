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
  char str[t + 1];
  gets(str);

  // n o e z r
  int arr[5] = {0};
  for (int i = 0 ; i < strlen(str) ; i++) {
    switch (str[i]) {
      case 'n':
        arr[0]++;
        break;
      case 'o':
        arr[1]++;
        break;
      case 'e':
        arr[2]++;
        break;
      case 'z':
        arr[3]++;
        break;
      case 'r':
        arr[4]++;
    }
  }

  int oneCnt = (arr[0] > arr[1] ? (arr[1] > arr[2] ? arr[2] : arr[1]) : (arr[0] > arr[2] ? arr[2] : arr[0]));
  arr[0] -= oneCnt;
  arr[1] -= oneCnt;
  arr[2] -= oneCnt;

  while (oneCnt--) {
    pc('1');
    pc(' ');
  }

  int zeroCnt = 1000000;
  for (int i = 1; i < 5; i++) {
    if (arr[i] < zeroCnt) zeroCnt = arr[i];
  }
  
  while (zeroCnt--) {
    pc('0');
    pc(' ');
  }
}
 
int main()
{
  solve();
  return 0;
}