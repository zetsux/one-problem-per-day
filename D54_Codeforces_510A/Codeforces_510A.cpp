#include <stdio.h>
#include <string.h>
#define gc getchar
#define pc putchar

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
  int n = numget(), m = numget();

  for (int i = 0 ; i < n ; i++) {
    for (int j = 0 ; j < m ; j++) {
        if (i & 1) {
            int tmp = (i+1)/2;
            if ((tmp & 1 && j == m - 1) || (!(tmp & 1) && j == 0)) pc('#');
            else pc('.');
        }
        else pc('#');
    }

    pc('\n');
  }
}
 
int main()
{
  solve();
  return 0;
}