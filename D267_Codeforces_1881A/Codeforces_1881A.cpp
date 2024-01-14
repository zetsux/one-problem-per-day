#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <string>
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
  ll value = 0; int ne = 0;
  char c = gc();
  while(c==' ' || c == '\n') c = gc();
  if(c == '-'){ne = 1; c = gc();}
  while(c>='0' && c<='9'){
      value = (value<<3) + (value<<1) + c - '0'; c = gc();}
  if(ne) value*=-1;
  return value;
}

int solve()
{
  int n = numget(), m = numget();
  char s1[n + 1], s2[m + 1];
  gets(s1); gets(s2);
  std::string str1 = s1, str2 = s2;

  if (str1.find(str2) != std::string::npos) return 0;

  int i = 5;
  while (i--) {
    str1 += str1;
    if (str1.find(str2) != std::string::npos) return (5 - i);
  } return -1;
}

int main()
{
  int t = numget();
  while (t--) numput(solve());
  return 0;
}