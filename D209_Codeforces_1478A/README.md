# A. Nezzar and Colorful Balls

Source : [Problem](https://codeforces.com/problemset/problem/1478/A)

- time limit per test 1 second
- memory limit per test 512 megabytes
- input standard input
- output standard output

Nezzar has n balls, numbered with integers 1, 2, …, n. Numbers a1,a2,…,an
are written on them, respectively. Numbers on those balls form a non-decreasing sequence, which means that ai ≤ ai + 1 for all 1 ≤ i < n.

Nezzar wants to color the balls using the minimum number of colors, such that the following holds.

- For any color, numbers on balls will form a strictly increasing sequence if he keeps balls with this chosen color and discards all other balls.

Note that a sequence with the length at most 1 is considered as a strictly increasing sequence.

Please help Nezzar determine the minimum number of colors.

## Input

The first line contains a single integer t (1 ≤ t ≤ 100) — the number of testcases.

The first line of each test case contains a single integer n (1 ≤ n ≤ 100).

The second line of each test case contains n integers a1, a2, …, an (1 ≤ ai ≤ n). It is guaranteed that a1 ≤ a2 ≤ … ≤ an.

## Output

For each test case, output the minimum number of colors Nezzar can use.

## Example

### Sample Input 1

    5
    6
    1 1 1 2 3 4
    5
    1 1 2 2 3
    4
    2 2 2 2
    3
    1 2 3
    1
    1

### Sample Output 1

    3
    2
    4
    1
    1

## Note

Let's match each color with some numbers. Then:

In the first test case, one optimal color assignment is [1,2,3,3,2,1].

In the second test case, one optimal color assignment is [1,2,1,2,1].
