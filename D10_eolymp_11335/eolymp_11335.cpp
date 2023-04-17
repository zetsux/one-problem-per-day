#include <stdio.h>
#include <math.h>
#include <cstring>
#include <algorithm>
#define gc getchar_unlocked
#define ll long long
#define ull unsigned long long
#define pc putchar_unlocked

int map[1000][1000];
ull sum = 0;
 
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

void checkMine(int i, int j) {
    if (map[i][j] != 0) {
        sum += map[i][j];
        map[i][j] = 0;
    }
}
 
void solve()
{
    int n = numget(), m = numget();
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            map[i][j] = numget();
        }
    }

    int q = numget();

    while (q--) {
        int y1 = numget() - 1, y2 = numget() - 1, x1 = numget() - 1, x2 = numget() - 1;
        
        if (y1 <= y2 && x1 <= x2) {
            for (int i = y1; i <= y2; i++) {
                for (int j = x1; j <= x2; j++) checkMine(i, j);
            }
        } else if (y1 > y2 && x1 > x2) {
            for (int i = y1; i > y2; i--) {
                for (int j = x1; j > x2; j--) checkMine(i, j);
            }
        } else if (y1 <= y2 && x1 > x2) {
            for (int i = y1; i <= y2; i++) {
                for (int j = x1; j > x2; j--) checkMine(i, j);
            }
        } else if (y1 > y2 && x1 <= x2) {
            for (int i = y1; i > y2; i--) {
                for (int j = x1; j <= x2; j++) checkMine(i, j);
            }
        }
    }

    numput(sum);
}
 
int main()
{
    solve();
    return 0;
}