#include <stdio.h>
#include <string.h>
#include <set>
#define gc getchar

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
  int n = numget();
  std::set<char> wrd = {'T', 'i', 'm', 'u', 'r'};

  while (n--) {
    int x = numget();
    char str[x];
    gets(str);

    if (x != 5) {
      puts("NO");
      continue;
    }

    for (int i = 0; i < x; i++) {
      if (wrd.find(str[i]) == wrd.end()) {
        puts("NO");
        break;
      }

      wrd.erase(str[i]);
    }

    if (wrd.empty()) puts("YES");
    wrd = {'T', 'i', 'm', 'u', 'r'};
  }
}
 
int main()
{
  solve();
  return 0;
}