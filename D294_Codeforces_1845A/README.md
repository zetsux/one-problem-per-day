# A. Forbidden Integer

Source : [Problem](https://codeforces.com/problemset/problem/1845/A)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given an integer n, which you want to obtain. You have an unlimited supply of every integer from 1 to k, except integer x (there are no integer x at all).

You are allowed to take an arbitrary amount of each of these integers (possibly, zero). Can you make the sum of taken integers equal to n?

If there are multiple answers, print any of them.

## Input

The first line contains a single integer t (1 ≤ t ≤ 100) — the number of testcases.

The only line of each testcase contains three integers n, k and x (1 ≤ x ≤ k ≤ n ≤ 100).

## Output

For each test case, in the first line, print "YES" or "NO" — whether you can take an arbitrary amount of each integer from 1 to k, except integer x, so that their sum is equal to n.

If you can, the second line should contain a single integer m — the total amount of taken integers. The third line should contain m integers — each of them from 1 to k, not equal to x, and their sum is n.

If there are multiple answers, print any of them.

## Example

### Sample Input 1

    5
    10 3 2
    5 2 1
    4 2 1
    7 7 3
    6 1 1

### Sample Output 1

    YES
    6
    3 1 1 1 1 3
    NO
    YES
    2
    2 2
    YES
    1
    7
    NO

## Note

Another possible answer for the first testcase is [3,3,3,1]. Note that you don't have to minimize the amount of taken integers. There also exist other answers.

In the second testcase, you only have an unlimited supply of integer 2. There is no way to get sum 5 using only them.

In the fifth testcase, there are no integers available at all, so you can't get any positive sum.
