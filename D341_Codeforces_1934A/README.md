# A. Too Min Too Max

Source : [Problem](https://codeforces.com/problemset/problem/1934/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Given an array 𝑎 of 𝑛 elements, find the maximum value of the expression:

|𝑎𝑖 − 𝑎𝑗| + |𝑎𝑗 − 𝑎𝑘| + |𝑎𝑘 − 𝑎𝑙| + |𝑎𝑙 − 𝑎𝑖|

where 𝑖, 𝑗, 𝑘, and 𝑙 are four distinct indices of the array 𝑎, with 1 ≤ 𝑖, 𝑗, 𝑘, 𝑙 ≤ 𝑛.

Here |𝑥| denotes the absolute value of 𝑥.

## Input

The first line contains one integer 𝑡 (1 ≤ 𝑡 ≤ 500) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer 𝑛 (4 ≤ 𝑛 ≤ 100) — the length of the given array.

The second line of each test case contains 𝑛 integers 𝑎1, 𝑎2, …, 𝑎𝑛 (−106 ≤ 𝑎𝑖 ≤ 106).

## Output

For each test case, print a single integer — the maximum value.

## Example

### Sample Input 1

    5
    4
    1 1 1 1
    5
    1 1 2 2 3
    8
    5 1 3 2 -3 -1 10 3
    4
    3 3 1 1
    4
    1 2 2 -1

### Sample Output 1

    0
    6
    38
    8
    8

## Note

In the first test case, for any selection of 𝑖, 𝑗, 𝑘, 𝑙, the answer will be 0. For example, |𝑎1 − 𝑎2| + |𝑎2 − 𝑎3| + |𝑎3 − 𝑎4| + |𝑎4 − 𝑎1| = |1 − 1| + |1 − 1| + |1 − 1| + |1 − 1| = 0 + 0 + 0 + 0 = 0.

In the second test case, for 𝑖 = 1, 𝑗 = 3, 𝑘 = 2, and 𝑙 = 5, the answer will be 6. |𝑎1 − 𝑎3| + |𝑎3 − 𝑎2| + |𝑎2 − 𝑎5| + |𝑎5 − 𝑎1| = |1 − 2| + |2 − 1| + |1 − 3| + |3 − 1| = 1 + 1 + 2 + 2 = 6.
