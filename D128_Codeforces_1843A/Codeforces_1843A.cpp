#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define gc getchar
#define pc putchar
#define ull unsigned long long

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

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
      if (arr[j] < pivot) {
          i++;
          swap(&arr[i], &arr[j]);
      }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

void solve()
{
  int n = numget();
  while (n--) {
    int x = numget(), ans = 0;
    int arr[x];
    for (int i = 0; i < x; i++) arr[i] = numget();

    if (x == 1) {
      pc('0');
      pc('\n');
      continue;
    }

    quickSort(arr, 0, x - 1);
    for (int i = 0; i < x/2; i++) ans += (arr[x - i - 1] - arr[i]);
    numput(ans);
  }
}
 
int main()
{
  solve();
  return 0;
}