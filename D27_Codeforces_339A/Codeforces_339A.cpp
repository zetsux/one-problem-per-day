#include <stdio.h>
#include <string.h>

char str[101];

void solve()
{
  scanf("%s", str);

  int cnt[4] = {0};

  for (int i = 0 ; i < strlen(str) ; i += 2) cnt[str[i] - 48]++;

  int idx = 0;
  for (int i = 1 ; i <= 3 ; i++) {
    while (cnt[i]--) {
      str[idx] = '0' + i;
      idx += 2;
    }
  }

  printf("%s", str);
}
 
int main()
{
    solve();
    return 0;
}