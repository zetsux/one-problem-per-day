#include <stdio.h>
#include <string.h>
 
void solve()
{
    char str[1001];
    scanf("%s", str);

    if (str[0] > 90) {
        str[0] -= 32;
    }

    printf("%s", str);
}
 
int main()
{
    solve();
    return 0;
}