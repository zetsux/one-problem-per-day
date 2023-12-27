# A. Puzzle Pieces

Source : [Problem](https://codeforces.com/problemset/problem/1345/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given a special jigsaw puzzle consisting of n ⋅ m identical pieces. Every piece has three tabs and one blank, as pictured below.

<p align="center"><img src="https://espresso.codeforces.com/12bd9722a46824150283fab59ae3dad3c2926ed9.png"></p>

The jigsaw puzzle is considered solved if the following conditions hold:

1. The pieces are arranged into a grid with n rows and m columns.
2. For any two pieces that share an edge in the grid, a tab of one piece fits perfectly into a blank of the other piece.

Through rotation and translation of the pieces, determine if it is possible to solve the jigsaw puzzle.

## Input

The test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases. Next t lines contain descriptions of test cases.

Each test case contains two integers n and m (1 ≤ n, m ≤ 10^5).

## Output

For each test case output a single line containing "YES" if it is possible to solve the jigsaw puzzle, or "NO" otherwise. You can print each letter in any case (upper or lower).

## Example

### Sample Input 1

    3
    1 3
    100000 100000
    2 2

### Sample Output 1

    YES
    NO
    YES

## Note

For the first test case, this is an example solution:

<p align="center"><img src="https://espresso.codeforces.com/03f246790d1b31b27745f0ae94fc105e94373d46.png"></p>

For the second test case, we can show that no solution exists.

For the third test case, this is an example solution:

<p align="center"><img src="https://espresso.codeforces.com/b09e8310c88f18ac6bfa5ec4b17f92aa50d890bb.png"></p>
