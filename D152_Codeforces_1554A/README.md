# A. Cherry

Source : [Problem](https://codeforces.com/problemset/problem/1554/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given n
integers a1, a2, …, an. Find the maximum value of max(al, al + 1, …, ar) ⋅ min(al, al + 1, …, ar)
over all pairs (l, r) of integers for which 1 ≤ l < r ≤ n.

## Input

The first line contains a single integer t (1 ≤ t ≤ 10000) — the number of test cases.

The first line of each test case contains a single integer n (2 ≤ n ≤ 10^5).

The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 10^6).

It is guaranteed that the sum of n over all test cases doesn't exceed 3 ⋅ 10^5.

## Output

For each test case, print a single integer — the maximum possible value of the product from the statement.

## Example

### Sample Input 1

    4
    3
    2 4 3
    4
    3 2 3 1
    2
    69 69
    6
    719313 273225 402638 473783 804745 323328

### Sample Output 1

    12
    6
    4761
    381274500335

## Note

Let f(l, r) = max(al, al + 1, …, ar) ⋅ min(al, al + 1, …, ar).

In the first test case,

- f(1, 2)= max(a1, a2) ⋅ min(a1, a2) = max(2, 4) ⋅ min(2, 4) = 4 ⋅ 2 = 8.
- f(1, 3) = max(a1, a2, a3) ⋅ min(a1, a2, a3) = max(2, 4, 3) ⋅ min(2, 4, 3) = 4 ⋅ 2 = 8.
- f(2,3)=max(a2,a3)⋅min(a2,a3)=max(4,3)⋅min(4,3)=4⋅3=12.

So the maximum is f(2, 3) = 12.

In the second test case, the maximum is f(1, 2) = f(1, 3) = f(2, 3) = 6.
