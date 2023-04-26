#include <stdio.h>
#include <string.h>
 
void solve()
{
    char str[101];
    scanf("%s", str);

    int arr[26] = {0}, count = 0, idx;
    
    for (int i = 0; i < strlen(str); i++) {
        idx = str[i] - 97;

        if (!arr[idx]) {
            count++;
            arr[idx] = 1;
        }
    }

    if (count & 1) {
        printf("IGNORE HIM!");
    } else {
        printf("CHAT WITH HER!");
    }
}
 
int main()
{
    solve();
    return 0;
}