#include <stdio.h>
#include <math.h>
#define gc getchar
#define ll long long
#define ull unsigned long long
 
ull numget()
{
    ull value = 0; bool ne = 0;
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
    int q = numget();
    while (q--) {
        int bx = numget(), by = numget();
        int sum = bx + by;

        if (sum & 1) {
            printf("-1 -1\n");
            continue;
        }

        bx -= (sum/2);
        if (bx < 0) {
            by += bx;
            bx = 0;
        }
        printf("%d %d\n", bx, by);
    }
}
 
int main()
{
    solve();
    return 0;
}