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
    int q = numget(), arr[3];
    while (q--) {
        for (int i = 0; i < 3; i++) {
            arr[i] = numget();
        }

        if (arr[0] + arr[1] == arr[2]) pc('+');
        else pc('-');

        pc('\n');
    }
}
 
int main()
{
    solve();
    return 0;
}