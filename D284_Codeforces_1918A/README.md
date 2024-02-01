# A. Brick Wall

Source : [Problem](https://codeforces.com/problemset/problem/1918/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

A brick is a strip of size 1 × k, placed horizontally or vertically, where k can be an arbitrary number that is at least 2 (k ≥ 2).

A brick wall of size n × m is such a way to place several bricks inside a rectangle n × m, that all bricks lie either horizontally or vertically in the cells, do not cross the border of the rectangle, and that each cell of the n × m rectangle belongs to exactly one brick. Here n is the height of the rectangle n × m and m is the width. Note that there can be bricks with different values of k in the same brick wall.

The wall stability is the difference between the number of horizontal bricks and the number of vertical bricks. Note that if you used 0 horizontal bricks and 2 vertical ones, then the stability will be −2, not 2.

What is the maximal possible stability of a wall of size n × m?

It is guaranteed that under restrictions in the statement at least one n × m wall exists.

## Input

The first line of the input contains one integer t (1 ≤ t ≤ 10000), the number of test cases.

The only line of each test case contains two integers n and m (2 ≤ n, m ≤ 10^4).

## Output

For each test case, print one integer, the maximum stability of a wall of size n×m.

## Example

### Sample Input 1

    5
    2 2
    7 8
    16 9
    3 5
    10000 10000

### Sample Output 1

    2
    28
    64
    6
    50000000

## Note

In the 1st test case, the maximum stability of 2 is obtained by placing two horizontal bricks 1 × 2 one on top of the other.

In the 2nd test case, one can get the maximum stability of 28 by placing 4 horizontal bricks 1 × 2 in each of the 7 rows.
