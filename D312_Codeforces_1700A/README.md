# A. Optimal Path

Source : [Problem](https://codeforces.com/problemset/problem/1700/A)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given a table a of size n×m. We will consider the table rows numbered from top to bottom from 1 to n, and the columns numbered from left to right from 1 to m. We will denote a cell that is in the i-th row and in the j-th column as (i, j). In the cell (i, j) there is written a number (i − 1) ⋅ m + j, that is aij = (i − 1) ⋅ m + j.

A turtle initially stands in the cell (1, 1) and it wants to come to the cell (n, m). From the cell (i, j) it can in one step go to one of the cells (i + 1, j) or (i, j + 1), if it exists. A path is a sequence of cells in which for every two adjacent in the sequence cells the following satisfies: the turtle can reach from the first cell to the second cell in one step. A cost of a path is the sum of numbers that are written in the cells of the path.

<p align="center"><img src="https://espresso.codeforces.com/9857613b5dbdfcc9e89d5add1183537c52368425.png"></p>

For example, with n = 2 and m = 3 the table will look as shown above. The turtle can take the following path: (1, 1) → (1, 2) → (1, 3) → (2, 3). The cost of such way is equal to a11 + a12 + a13 + a23 = 12. On the other hand, the paths (1, 1) → (1, 2) → (2, 2) → (2, 1)
and (1, 1) → (1, 3) are incorrect, because in the first path the turtle can't make a step (2, 2) → (2, 1), and in the second path it can't make a step (1, 1) → (1, 3).

You are asked to tell the turtle a minimal possible cost of a path from the cell (1,1) to the cell (n,m). Please note that the cells (1,1) and (n,m) are a part of the way.

## Input

The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases. The description of test cases follows.

A single line of each test case contains two integers n and m (1 ≤ n, m ≤ 10^4) — the number of rows and columns of the table a respectively.

## Output

For each test case output a single integer — a minimal possible cost of a path from the cell (1,1) to the cell (n,m).

## Example

### Sample Input 1

    7
    1 1
    2 3
    3 2
    7 1
    1 10
    5 5
    10000 10000

### Sample Output 1

    1
    12
    13
    28
    55
    85
    500099995000

## Note

In the first test case the only possible path consists of a single cell (1,1).

The path with the minimal cost in the second test case is shown in the statement.

In the fourth and the fifth test cases there is only one path from (1,1) to (n,m). Both paths visit every cell in the table.
