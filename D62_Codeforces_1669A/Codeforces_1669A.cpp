#include <stdio.h>
#include <string.h>
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

void outputRes(int a) {printf("Division %d\n", a);}
 
void solve()
{
  int n = numget(), x;
  while (n--) {
    scanf("%d", &x);

    if (x >= 1900) outputRes(1);
    else if (x >= 1600) outputRes(2);
    else if (x >= 1400) outputRes(3);
    else outputRes(4);
  }
}
 
int main()
{
  solve();
  return 0;
}