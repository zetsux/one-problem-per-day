#include <stdio.h>
#include <string.h>

char str[101];
 
void toLower() {
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] <= 90) str[i] += 32;
  }
}

void toUpper() {
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] >= 97) str[i] -= 32;
  }
}

void solve()
{
  scanf("%s", str);

  int lc = 0, uc = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] >= 97) lc++;
    else uc++;
  }

  if (lc >= uc) toLower();
  else toUpper();

  printf("%s", str);
}
 
int main()
{
    solve();
    return 0;
}