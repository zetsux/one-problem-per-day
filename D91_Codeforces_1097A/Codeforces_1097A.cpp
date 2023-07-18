#include <stdio.h>
#include <string.h>

void solve()
{
  char t[3];
  scanf("%s", t);

  for(int i = 0 ; i < 5 ; i++) {
    char c[3];
    scanf("%s", c);

    if (c[0] == t[0] || c[1] == t[1]) {
      puts("YES");
      return;
    }
  }

  puts("NO");
}
 
int main()
{
  solve();
  return 0;
}