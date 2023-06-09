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

int checkChar(char c, char letter) {
  return (c == letter || c == (letter + 32));
}
 
void solve()
{
  int n = numget();
  char str[4];

  while (n--) {
    gets(str);

    if (checkChar(str[0], 'Y') && checkChar(str[1], 'E') && checkChar(str[2], 'S')) puts("YES");
    else puts("NO");
  }
}
 
int main()
{
  solve();
  return 0;
}