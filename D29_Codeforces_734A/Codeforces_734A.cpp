#include <stdio.h>
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

  char str[100010];
  scanf("%s", str);

  int a = 0, d = 0;
  for (int i = 0; i < n; i++) {
    if (str[i] == 'A') {
      a++;
    } else {
      d++;
    }
  }

  if (a > d) {
    printf("Anton");
  } else if (d > a) {
    printf("Danik");
  } else {
    printf("Friendship");
  }
}
 
int main()
{
    solve();
    return 0;
}