# A. Digits Sum

Source : [Problem](https://codeforces.com/problemset/problem/1553/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Let's define S(x) to be the sum of digits of number x written in decimal system. For example, S(5)=5
, S(10)=1
, S(322)=7
.

We will call an integer x
 interesting if S(x+1)<S(x)
. In each test you will be given one integer n
. Your task is to calculate the number of integers x
 such that 1≤x≤n
 and x
 is interesting.

## Input
The first line contains one integer t (1 ≤ t ≤ 1000)  — number of test cases.

Then t lines follow, the i- th line contains one integer n (1 ≤ n ≤ 10^9) for the i-th test case.

## Output
Print t integers, the i
-th should be the answer for the i
-th test case.

## Example
### Sample Input 1
    5
    1
    9
    10
    34
    880055535

### Sample Output 1
    0
    1
    1
    3
    88005553

## Note
The first interesting number is equal to 9.

