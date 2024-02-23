# A. Divisible Array

Source : [Problem](https://codeforces.com/problemset/problem/1828/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given a positive integer n. Please find an array a1, a2, …, an that is perfect.

A perfect array a1, a2, …, an satisfies the following criteria:

- 1 ≤ ai ≤ 1000 for all 1 ≤ i ≤ n.
- ai is divisible by i for all 1 ≤ i ≤ n.
- a1 + a2 + … + an is divisible by n.

## Input

Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 200). The description of the test cases follows.

The only line of each test case contains a single positive integer n (1 ≤ n ≤ 200) — the length of the array a.

## Output

For each test case, output an array a1, a2, …, an that is perfect.

We can show that an answer always exists. If there are multiple solutions, print any.

## Example

### Sample Input 1

    7
    1
    2
    3
    4
    5
    6
    7

### Sample Output 1

    1
    2 4
    1 2 3
    2 8 6 4
    3 4 9 4 5
    1 10 18 8 5 36
    3 6 21 24 10 6 14

## Note

In the third test case:

- a1 = 1 is divisible by 1.
- a2 = 2 is divisible by 2.
- a3 = 3 is divisible by 3.
- a1 + a2 + a3 = 1 + 2 + 3 = 6 is divisible by 3.

In the fifth test case:

- a1 = 3 is divisible by 1.
- a2 = 4 is divisible by 2.
- a3 = 9 is divisible by 3.
- a4 = 4 is divisible by 4.
- a5 = 5 is divisible by 5.
- a1 + a2 + a3 + a4 + a5 = 3 + 4 + 9 + 4 + 5 = 25 is divisible by 5.
