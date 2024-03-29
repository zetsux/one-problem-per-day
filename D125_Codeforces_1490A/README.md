# A. Dense Array

Source : [Problem](https://codeforces.com/problemset/problem/1490/A)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

Polycarp calls an array dense if the greater of any two adjacent elements is not more than twice bigger than the smaller. More formally, for any i (1 ≤ i ≤ n−1), this condition must be satisfied:

<h3 align="center">max(a[i],a[i+1]) / min(a[i],a[i+1]) ≤ 2</h3>

For example, the arrays [1,2,3,4,3]
, [1,1,1]
and [5,10]
are dense. And the arrays [5,11]
, [1,4,2]
, [6,6,1]
are not dense.

You are given an array a
of n
integers. What is the minimum number of numbers you need to add to an array to make it dense? You can insert numbers anywhere in the array. If the array is already dense, no numbers need to be added.

For example, if a=[4,2,10,1]
, then the answer is 5
, and the array itself after inserting elements into it may look like this: a=[4,2,3––,5––,10,6––,4––,2––,1]
(there are other ways to build such a
).

## Input

The first line contains one integer t
(1 ≤ t ≤ 1000). Then t
test cases follow.

The first line of each test case contains one integer n (2 ≤ n ≤ 50) — the length of the array a.

The next line contains n
integers a1,a2,…,an (1 ≤ ai ≤ 50).

## Output

For each test case, output one integer — the minimum number of numbers that must be added to the array to make it dense.

## Example

### Sample Input 1

    6
    4
    4 2 10 1
    2
    1 3
    2
    6 1
    3
    1 4 2
    5
    1 2 3 4 3
    12
    4 31 25 50 30 20 34 46 42 16 15 16

### Sample Output 1

    5
    1
    2
    1
    0
    3

## Note

The first test case is explained in the statements.

In the second test case, you can insert one element, a=[1,2––,3].

In the third test case, you can insert two elements, a=[6,4––,2––,1].

In the fourth test case, you can insert one element, a=[1,2––,4,2].

In the fifth test case, the array a
is already dense.
