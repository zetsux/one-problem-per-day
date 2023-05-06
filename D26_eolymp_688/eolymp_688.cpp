#include <stdio.h>
#include <algorithm>
#define MX 100001
#define gc getchar_unlocked
#define pc putchar_unlocked

int left[MX], right[MX], sz[MX], sh[MX], value[MX];

inline void numput (int n)
{
  int N = n, rev, count = 0;
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
  pc(' ');
}

int numget()
{
  int value = 0; bool ne = 0;
  int c = gc();
  while(c==' ' || c == '\n') c = gc();
  if(c == '-'){ne = 1; c = gc();}
  while(c>='0' && c<='9'){
      value = (value<<3) + (value<<1) + c - '0'; c = gc();}
  if(ne) value*=1;
  return value;
}

void merge(int &t, int l, int r)
{
    if (!l || !r) t = l|r;
    else if (l > r) {
        merge(right[l], right[l], r), t=l;
    }
    else {
        merge(left[r], l, left[r]), t=r;
    }
    if(t) sz[t] = sz[left[t]] + sz[right[t]] + 1;
}

void split(int t, int &l, int &r, int sv)
{
    if(!t) l=r=0;
    else if (sz[left[t]] < sv){
        split(right[t], right[t], r, sv-sz[left[t]]-1), l=t;
    }
    else {
        split(left[t], l, left[t], sv), r=t;
    }
    if(t) sz[t]=sz[left[t]]+sz[right[t]]+1;
}

int main()
{
    int n = numget(), m = numget();
    for (int i=0; i<n; i++) sh[i] = i + 1;
    for (int i=1; i<=n ; i++) sz[i]=1, left[i]=right[i]=0;
    std::random_shuffle(sh, sh+n);
    int cz = 1;
    for(int i=0 ; i<n ; i++){
        value[sh[i]]=cz, cz++;
    } 
    int lb = sh[0];
    for(int i=1;i<n;i++)merge(lb, lb, sh[i]);
    while(m--){
        int l = numget(), r = numget();
        int lz, mz, rz;
        split(lb, mz, rz, r); split(mz, lz, mz, l-1);
        merge(lb, mz, lz); merge(lb, lb, rz);
    }

    for (int i = 1; i <= n ; i++){
        int md; split(lb, md, lb, 1); numput(value[md]);
    }
    puts("");
    return 0;
}