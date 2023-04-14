#include <stdio.h>
#include <math.h>
#include <cstring>
#include <algorithm>
#include <vector>
#define gc getchar_unlocked
#define ll long long
#define ull unsigned long long
#define pc putchar_unlocked
 
inline void numput (ull n)
{
    ull N = n, rev, count = 0;
    rev = N;
    if (N == 0) {
      pc('0'); 
      pc('\n'); 
      return;
    }
    while ((rev % 10) == 0) {
      count++;
      rev /= 10;
    }
    rev = 0;
    while (N != 0) { 
      rev = (rev<<3) + (rev<<1) + N % 10;
      N /= 10;
    }  
    while (rev != 0) {
      pc(rev % 10 + '0'); 
      rev /= 10;
    }
    while (count--) pc('0');
    pc('\n');
}
 
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
    int n = numget(), m = numget(), k = numget();
    std::vector<int> apl, apr;

    for (int i = 0; i < n; i++) apl.push_back(numget());
    for (int i = 0; i < m; i++) apr.push_back(numget());

    std::sort(apl.begin(), apl.end());
    std::sort(apr.begin(), apr.end());

    int il = 0, ir = 0, cnt = 0;
    while (il < n && ir < m) {
      int diff = apl[il] - apr[ir];

      if (diff <= k && diff >= (0 - k)) {
        il++;
        ir++;
        cnt++;
      } else if (diff > k) {
        ir++;
      } else {
        il++;
      }
    }

    numput(cnt);
}
 
int main()
{
    solve();
    return 0;
}