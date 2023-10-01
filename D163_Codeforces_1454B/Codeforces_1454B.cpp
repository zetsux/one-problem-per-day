#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <map>
#define gc getchar
#define pc putchar
#define ll long long
#define ull unsigned long long

inline void numput (ll n)
{
  ll N = n, rev, count = 0;
  if (N == 0) {
    pc('0'); 
    pc('\n'); 
    return;
  }

  if (N < 0) {
    N = -N;
    pc('-');
  }
  rev = N;
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
  int t = numget();
  while (t--) {
    int x = numget();
    int arr[x];
    std::map<int, int> cnt;
    for (int i = 0; i < x ; i++) {
      arr[i] = numget();
      cnt[arr[i]]++;
    }

    int num = 10000009, idx = 0;
    for (int i = 0; i < x ; i++) {
      if (cnt[arr[i]] == 1 && arr[i] < num) {
        num = arr[i];
        idx = i;
      }
    }
    numput(num == 10000009 ? -1 : idx + 1);
  }
}
 
int main()
{
  solve();
  return 0;
}