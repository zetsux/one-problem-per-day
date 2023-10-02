# A. Find The Array

Source : [Problem](https://codeforces.com/problemset/problem/1550/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Let's call an array a
consisting of n
positive (greater than 0) integers beautiful if the following condition is held for every i
from 1 to n: either ai=1, or at least one of the numbers ai−1 and ai−2
exists in the array as well.

For example:

- the array [5,3,1]
  is beautiful: for a1
  , the number a1−2=3
  exists in the array; for a2
  , the number a2−2=1
  exists in the array; for a3
  , the condition a3=1
  holds;
- the array [1,2,2,2,2]
  is beautiful: for a1
  , the condition a1=1
  holds; for every other number ai
  , the number ai−1=1
  exists in the array;
- the array [1,4]
  is not beautiful: for a2
  , neither a2−2=2
  nor a2−1=3
  exists in the array, and a2≠1
  ;
- the array [2]
  is not beautiful: for a1
  , neither a1−1=1
  nor a1−2=0
  exists in the array, and a1≠1
  ;
- the array [2,1,3]
  is beautiful: for a1
  , the number a1−1=1
  exists in the array; for a2
  , the condition a2=1
  holds; for a3
  , the number a3−2=1
  exists in the array.
  You are given a positive integer s
  . Find the minimum possible size of a beautiful array with the sum of elements equal to s
  .

## Input

The first line contains one integer t (1 ≤ t ≤ 5000) — the number of test cases.

Then t lines follow, the i-th line contains one integer s (1 ≤ s ≤ 5000) for the i-th test case.

## Output

Print t
integers, the i
-th integer should be the answer for the i
-th testcase: the minimum possible size of a beautiful array with the sum of elements equal to s.

## Example

### Sample Input 1

    4
    1
    8
    7
    42

### Sample Output 1

    1
    3
    3
    7

## Note

Consider the example test:

1. in the first test case, the array [1] meets all conditions;
2. in the second test case, the array [3,4,1] meets all conditions;
3. in the third test case, the array [1,2,4] meets all conditions;
4. in the fourth test case, the array [1,4,6,8,10,2,11] meets all conditions.
