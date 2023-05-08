#include <stdio.h>
#include <string.h>

void solve()
{
  char str[20];
  scanf("%s", str);

  int cnt = 0;

  for (int i = 0 ; i < strlen(str) ; i++) {
    if (str[i] == '4' || str[i] == '7') cnt++;
  }

  if (cnt == 4 || cnt == 7) printf("YES");
  else printf("NO");
}
 
int main()
{
    solve();
    return 0;
}