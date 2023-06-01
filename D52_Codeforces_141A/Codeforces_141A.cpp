#include <stdio.h>
#include <string.h>
 
void solve()
{
  int check[26] = {0};
  char str[101];

  for (int i = 0 ; i < 2 ; i++) {
    gets(str);
    for (int j = 0 ; j < strlen(str) ; j++) check[str[j] - 'A']--;
  }

  gets(str);
  for (int i = 0 ; i < strlen(str) ; i++) check[str[i] - 'A']++;

  for (int i = 0; i < 26; i++) {
    if (check[i] != 0) {
      puts("NO");
      return;
    }
  }

  puts("YES");
}
 
int main()
{
  solve();
  return 0;
}