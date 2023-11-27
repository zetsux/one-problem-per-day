# A. The Miracle and the Sleeper

Source : [Problem](https://codeforces.com/problemset/problem/1562/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given two integers l and r, l ≤ r. Find the largest possible value of amodb
over all pairs (a,b) of integers for which r ≥ a ≥ b ≥ l.

As a reminder, a mod b is a remainder we get when dividing a by b. For example, 26 mod 8 = 2.

## Input

Each test contains multiple test cases.

The first line contains one positive integer t (1 ≤ t ≤ 10^4), denoting the number of test cases. Description of the test cases follows.

The only line of each test case contains two integers l, r (1 ≤ l ≤ r ≤ 10^9).

## Output

For every test case, output the largest possible value of a mod b over all pairs (a,b) of integers for which r ≥ a ≥ b ≥ l.

## Example

### Sample Input 1

    4
    1 1
    999999999 1000000000
    8 26
    1 999999999

### Sample Output 1

    0
    1
    12
    499999999

## Note

In the first test case, the only allowed pair is (a,b) = (1,1), for which a mod b = 1 mod 1 = 0.

In the second test case, the optimal choice is pair (a,b) = (1000000000,999999999), for which a mod b = 1.
