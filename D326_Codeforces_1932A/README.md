# A. Thorns and Coins

Source : [Problem](https://codeforces.com/problemset/problem/1932/A)

- time limit per test 1 second
- memory limit per test 512 megabytes
- input standard input
- output standard output

During your journey through computer universes, you stumbled upon a very interesting world. It is a path with n consecutive cells, each of which can either be empty, contain thorns, or a coin. In one move, you can move one or two cells along the path, provided that the destination cell does not contain thorns (and belongs to the path). If you move to the cell with a coin, you pick it up.

<p align="center"><img src="https://espresso.codeforces.com/72d3c406478fef9e56248f7c9ffe6c6be6f9cab2.png"><br>Here, green arrows correspond to legal moves, and the red arrow corresponds to an illegal move.</p>

You want to collect as many coins as possible. Find the maximum number of coins you can collect in the discovered world if you start in the leftmost cell of the path.

## Input

The first line of input contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases. Then the descriptions of the test cases follow.

The first line of each test case contains a single integer n (1 ≤ n ≤ 50) — the length of the path.

The second line of each test case contains a string of n
characters, the description of the path. The character '.' denotes an empty cell, '@' denotes a cell with a coin, and '\*' denotes a cell with thorns. It is guaranteed that the first cell is empty.

## Output

For each test case, output a single integer, the maximum number of coins you can collect.

## Example

### Sample Input 1

    3
    10
    .@@\*@.**@@
    5
    .@@@@
    15
    .@@..@\***..@@@\*

### Sample Output 1

    3
    4
    3

## Note

The picture for the first example is in the problem statement.

Here is the picture for the second example:

<p align="center"><img src="https://espresso.codeforces.com/f219f5a838ea637b58a96f6c654757ed91cb7ec6.png"></p>

And here is the picture for the third example:

<p align="center"><img src="https://espresso.codeforces.com/cd296e35c57468456bdab9bfec7d2b41542e6976.png"></p>
