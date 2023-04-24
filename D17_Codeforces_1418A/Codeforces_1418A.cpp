#include <stdio.h>
#include <math.h>
#define gc getchar
#define ll long long

ll numget()
{
    ll value = 0; bool ne = 0;
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
        ll x = numget(), y = numget(), k = numget();
        ll needs = ((((y + 1) * k) - 1 + x - 2) / (x - 1)) + k;
        printf("%lld\n", needs);
    }
}
 
int main()
{
    solve();
    return 0;
}