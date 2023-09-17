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

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
int partition(int arr[], int add[], int low, int high)
{
  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
      swap(&add[i], &add[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  swap(&add[i + 1], &add[high]);
  return (i + 1);
}

void quickSort(int arr[], int add[], int low, int high)
{
  if (low < high) {
    int pi = partition(arr, add, low, high);
    quickSort(arr, add, low, pi - 1);
    quickSort(arr, add, pi + 1, high);
  }
}

void solve()
{
  int t = numget();
  while (t--) {
    int n = numget(), k = numget();
    int cost[n], add[n];
    for (int i = 0 ; i < n ; i++) cost[i] = numget();
    for (int i = 0 ; i < n ; i++) add[i] = numget();

    quickSort(cost, add, 0, n - 1);
    int j = 0;
    while (cost[j] <= k && j < n) k += add[j++];
    numput(k);
  }
}
 
int main()
{
  solve();
  return 0;
}