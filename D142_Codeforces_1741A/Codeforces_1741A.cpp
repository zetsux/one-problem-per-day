#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define gc getchar
#define pc putchar
#define ull unsigned long long

inline void numput (ull n)
{
  ull N = n, rev, count = 0;
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
  int t = numget();
  while (t--) {
    char str1[51], str2[51];
    scanf("%s%s", str1, str2);
    
    int s1 = strlen(str1), s2 = strlen(str2);
    char l1 = str1[s1 - 1], l2 = str2[s2 - 1];
    if (l1 == l2) {
      if (s1 == s2) pc('=');
      else if ((l1 == 'S' && s1 > s2) || (l1 == 'L' && s1 < s2)) pc('<');
      else pc('>');
    }
    else pc(l1 < l2 ? '>' : '<');
    pc('\n');
  }
}
 
int main()
{
  solve();
  return 0;
}