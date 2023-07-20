#include <stdio.h>
#include <string.h>
#include <math.h>
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
    int x = numget(), arr[101], min = 101, max = 0, minIdx, maxIdx, o[3];
    for (int i = 0 ; i < x ; i++) {
      arr[i] = numget();
      if (arr[i] < min) {
        min = arr[i];
        minIdx = i;
      } if (arr[i] > max) {
        max = arr[i];
        maxIdx = i;
      }
    }

    if (maxIdx > minIdx) o[0] = x - minIdx, o[1] = (minIdx + 1) + (x - maxIdx), o[2] = maxIdx + 1;
    else o[0] = x - maxIdx, o[1] = (maxIdx + 1) + (x - minIdx), o[2] = minIdx + 1;
    numput((o[0] < o[1]) ? ((o[0] < o[2]) ? o[0] : o[2]) : ((o[1] < o[2]) ? o[1] : o[2]));
  }
}
 
int main()
{
  solve();
  return 0;
}