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
  int arr[n + 1] = {0};

  int p = numget(), x;
  while (p--) {
    x = numget();
    arr[x] = 1;
  }

  int q = numget();
  while (q--) {
    x = numget();
    arr[x] = 1;
  }

  for (int i = 1 ; i <= n ; i++) {
    if (arr[i] != 1) {
        printf("Oh, my keyboard!\n");
        return;
    }
  }

  printf("I become the guy.\n");
}
 
int main()
{
  solve();
  return 0;
}