#include <stdio.h>
#include <string.h>
#define gc getchar
#define pc putchar
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
    char a[8][8];
    int i, j;
    for (i = 0; i < 8; i++) {
      for (j = 0; j < 8; j++) a[i][j] = gc();
      gc();
    }

    for (i = 0; i < 8; i++) {
      int flag = 0;
      for (j = 0; j < 8; j++) {
        if (a[i][j] != '.') {
          flag = 1;
          break;
        }
      }
      if (flag) break;
    }

    while (i < 8 && a[i][j] != '.') pc(a[i++][j]);
    pc('\n');
  }
}
 
int main()
{
  solve();
  return 0;
}