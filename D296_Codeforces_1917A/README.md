# A. Least Product

Source : [Problem](https://codeforces.com/problemset/problem/1917/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given an array of integers a1, a2, …, an. You can perform the following operation any number of times (possibly zero):

- Choose any element ai from the array and change its value to any integer between 0 and ai (inclusive). More formally, if ai < 0 , replace ai with any integer in [ai,0], otherwise replace ai with any integer in [0,ai].

Let r be the minimum possible product of all the ai after performing the operation any number of times.

Find the minimum number of operations required to make the product equal to r. Also, print one such shortest sequence of operations. If there are multiple answers, you can print any of them.

## Input

Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 500) - the number of test cases. This is followed by their description.

The first line of each test case contains the a single integer n (1 ≤ n ≤ 100) — the length of the array.

The second line of each test case contains n integers a1, a2, …, an (−109 ≤ ai ≤ 109).

## Output

For each test case:

- The first line must contain the minimum number of operations k (0 ≤ k ≤ n).
- The j-th of the next k lines must contain two integers i and x, which represent the j-th operation. That operation consists in replacing ai with x.

## Example

### Sample Input 1

    4
    1
    155
    4
    2 8 -1 3
    4
    -1 0 -2 -5
    4
    -15 -75 -25 -30

### Sample Output 1

    1
    1 0
    0
    0
    1
    3 0

## Note

In the first test case, we can change the value of the first integer into 0 and the product will become 0, which is the minimum possible.

In the second test case, initially, the product of integers is equal to 2 ⋅ 8 ⋅ (−1) ⋅ 3 = −48 which is the minimum possible, so we should do nothing in this case.
