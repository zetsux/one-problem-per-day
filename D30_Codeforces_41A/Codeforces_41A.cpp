#include <stdio.h>
#include <string.h>

void solve()
{
  char str1[101], str2[101];
  scanf("%s", str1);
  scanf("%s", str2);

  for (int i = 0; i < strlen(str1); i++) {
    if (str1[i] != str2[strlen(str1) - 1 - i]) {
      printf("NO");
      return;
    }
  }

  printf("YES");
}
 
int main()
{
  solve();
  return 0;
}