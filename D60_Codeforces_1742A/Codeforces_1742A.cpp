#include <stdio.h>
#define gc getchar

int nm[3] = {0};

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

void outputRes(int x) {
  int a = (x == 0 ? 2 : x - 1), b = (x == 2 ? 0 : x + 1);
  (nm[x] == (nm[a] + nm[b]) ? puts("YES") : puts("NO"));
}

void solve()
{
  int n = numget(), mx;
  while (n--) {
    mx = 0;
    for (int i = 0 ; i < 3; i++) {
      nm[i] = numget();
      if (nm[i] > nm[mx]) mx = i;
    }
    outputRes(mx);
  }
}
 
int main()
{
  solve();
  return 0;
}