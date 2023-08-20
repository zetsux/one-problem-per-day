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

void solve()
{
  int n = numget();
  while (n--) {
    int x = numget(), sum = 0;
    int arr[x];
    for (int i = 0; i < x; i++) {
      arr[i] = numget();
      sum += arr[i];
    }

    if (sum % x != 0) puts("-1");
    else {
      int d = sum/x;
      sum = 0;
      for (int i = 0; i < x; i++) {
        if (arr[i] > d) sum++;
      }

      numput(sum);
    }
  }
}
 
int main()
{
  solve();
  return 0;
}