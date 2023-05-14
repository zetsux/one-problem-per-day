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
  int n = numget(), x = 0;
  while (n--) {
    char str[4];
    scanf("%s", str);

    if (str[1] == '+') x++;
    else x--;
  }

  printf("%d", x);
}
 
int main()
{
  solve();
  return 0;
}