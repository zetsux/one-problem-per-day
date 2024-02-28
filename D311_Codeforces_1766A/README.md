# A. Extremely Round

Source : [Problem](https://codeforces.com/problemset/problem/1766/A)

- time limit per test 3 seconds
- memory limit per test 512 megabytes
- input standard input
- output standard output

Let's call a positive integer extremely round if it has only one non-zero digit. For example, 5000, 4, 1, 10, 200 are extremely round integers; 42, 13, 666, 77, 101 are not.

You are given an integer n. You have to calculate the number of extremely round integers x
such that 1 ≤ x ≤ n.

## Input

The first line contains one integer t (1 ≤ t ≤ 104) — the number of test cases.

Then, t lines follow. The i-th of them contains one integer n (1 ≤ n ≤ 999999) — the description of the i-th test case.

## Output

For each test case, print one integer — the number of extremely round integers x such that 1 ≤ x ≤ n.

## Example

### Sample Input 1

    5
    9
    42
    13
    100
    111

### Sample Output 1

    9
    13
    10
    19
    19
