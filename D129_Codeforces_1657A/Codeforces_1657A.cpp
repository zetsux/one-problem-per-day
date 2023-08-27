#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define gc getchar
#define ull unsigned long long

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
    int a = numget(), b = numget(), c = numget(), x = numget(), y = numget();
    x = (x >= a ? x - a : 0);
    y = (y >= b ? y - b : 0);
    puts(c >= (x + y) ? "YES" : "NO");
  }
}
 
int main()
{
  solve();
  return 0;
}