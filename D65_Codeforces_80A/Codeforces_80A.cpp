#include <stdio.h>
#include <string.h>
#define gc getchar
#define pc putchar

inline void numput (int n)
{
  int N = n, rev, count = 0;
  rev = N;
  if (N == 0) {
    pc('0'); 
    pc(' '); 
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
  pc(' ');
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

int isNextSmallestPrime(int n, int m)
{
    bool prime[m + 2];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
 
    for (int p = 2; p * p <= m; p++) {
      if (prime[p] == true) {
          for (int i = p * p; i <= m; i += p)
              prime[i] = false;
      }
    }
 
    int p;
    for (p = n + 1; p <= m; p++)
      if (prime[p]) break;

    return (p == m ? 1 : 0);
}
 
void solve()
{
  int n = numget(), m = numget();
  (isNextSmallestPrime(n, m) ? puts("YES") : puts("NO"));
}
 
int main()
{
  solve();
  return 0;
}