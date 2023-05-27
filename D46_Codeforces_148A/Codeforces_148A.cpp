#include <stdio.h>
#include <math.h>
#define gc getchar
#define pc putchar

int divLCM[5] = {0}, d;

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

int gcd(int num1, int num2)
{
  if (num2 == 0)
      return num1;
  return gcd(num2, num1 % num2);
}
 
int getLCM(const int arr[], int n)
{
  int lcm = arr[0];

  for (int i = 1; i < n; i++) {
      int num1 = lcm;
      int num2 = arr[i];
      int gcd_val = gcd(num1, num2);
      lcm = (lcm * arr[i]) / gcd_val;
  }
  return lcm;
}

void combineUtil(const int arr[], int n, int r, int index, int data[], int i)
{
  if (index == r)
  {
    int curLCM = getLCM(data, r);
    divLCM[r] += (d/curLCM);
    return;
  }

  if (i >= n) return;

  data[index] = arr[i];
  combineUtil(arr, n, r, index + 1, data, i + 1);

  combineUtil(arr, n, r, index, data, i+1);
}

void getAllLCM(int arr[], int n, int r)
{
  int data[r];
  combineUtil(arr, n, r, 0, data, 0);
}
 
void solve()
{
  int n[4], flag = 0;
  for (int i = 0 ; i < 4 ; i++) {
    n[i] = numget();
    if (n[i] == 1) flag = 1;
  }

  d = numget();
  if (flag) {
    numput(d);
    return;
  }

  // LCM 1
  for (int i = 0 ; i < 4 ; i++) {
    divLCM[1] += (d/n[i]);
  }

  // LCM 2 - 3
  getAllLCM(n, 4, 2);
  getAllLCM(n, 4, 3);

  // LCM 4
  divLCM[4] = d/getLCM(n, 4);

  numput(divLCM[1] - divLCM[2] + divLCM[3] - divLCM[4]);
}
 
int main()
{
  solve();
  return 0;
}