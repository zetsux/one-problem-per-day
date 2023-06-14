#include <stdio.h>
#include <set>
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
 
void solve()
{
  int n = numget(), m = numget();
  std::set<int> s;
  int arr[n + 1] = {0};

  for (int i = 1; i <= n; i++) s.insert(i);

  while (m--) {
    int a = numget(), b = numget(), win = numget();

    std::set<int>::iterator it = s.lower_bound(a);
    while(it != s.end()) {
        int cur = *it;            
        if(cur > b) break;      
                  
        it++;

        if(cur != win) {
          arr[cur] = win;
          s.erase(cur);
        }
    }
  }

  for (int i = 1 ; i <= n ; i++) numput(arr[i]);
}
 
int main()
{
  solve();
  return 0;
}