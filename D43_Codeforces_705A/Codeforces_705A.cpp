#include <stdio.h>
#include <math.h>
#define ull unsigned long long
#define gc getchar

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

  for (int i = 0 ; i < n ; i++) {
    if (i & 1) printf("I love ");
    else printf("I hate ");

    if (i == (n-1)) printf("it ");
    else printf("that ");
  }
}
 
int main()
{
  solve();
  return 0;
}