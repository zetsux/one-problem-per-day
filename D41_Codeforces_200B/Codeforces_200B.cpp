#include <stdio.h>
#include <math.h>
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
  double sum = 0, tot = n;
  
  while (n--) sum += numget();

  printf("%.12lf\n", sum/tot);
}
 
int main()
{
  solve();
  return 0;
}