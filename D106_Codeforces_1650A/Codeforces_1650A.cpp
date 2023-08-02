#include <stdio.h>
#include <string.h>
#include <math.h>
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
  while (n--)
	{
		char str[50];
    gets(str);

    char c = gc();
    gc(); // buffer
    for (int i = 0; i < strlen(str); i += 2) {
      if (str[i] == c) {
        c = '-';
        break;
      }
    }

    if (c == '-') puts("YES");
    else puts("NO");
	}
}
 
int main()
{
  solve();
  return 0;
}