#include <stdio.h>
#include <math.h>
#include <string.h>
#define pc putchar
 
void solve()
{
  char a[101], b[101];
  gets(a);
  gets(b);

  for (int i = 0; i < strlen(a); i++) {
    if (a[i] != b[i]) pc('1');
    else pc('0');
  }
}
 
int main()
{
  solve();
  return 0;
}