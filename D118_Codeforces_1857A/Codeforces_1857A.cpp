#include <stdio.h>
#include <string.h>
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
    int x = numget(), odd = 0;
    for (int i = 0; i < x; i++) {
      int nm = numget();
      if (nm & 1) odd++;
    }
    puts((odd & 1) ? "NO" : "YES");
  }
}
 
int main()
{
  solve();
  return 0;
}