#include <stdio.h>
#include <math.h>
#define gc getchar
#define ull unsigned long long
#define pc putchar

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
    int q = numget(), arr[4];
    while (q--) {
        int min = 0;

        for (int i = 0; i < 4; i++) {
            arr[i] = numget();
            
            if (arr[i] < arr[min]) min = i;
        }

        switch (min) {
            case 0:
                if (arr[3] > arr[1] && arr[3] > arr[2]) printf("YES");
                else printf("NO");
                break;
            case 1:
                if (arr[2] > arr[0] && arr[2] > arr[3]) printf("YES");
                else printf("NO");
                break;
            case 2:
                if (arr[1] > arr[0] && arr[1] > arr[3]) printf("YES");
                else printf("NO");
                break;
            default:
                if (arr[0] > arr[1] && arr[0] > arr[2]) printf("YES");
                else printf("NO");
        } 
        puts("");
    }
}
 
int main()
{
    solve();
    return 0;
}