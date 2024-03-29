# A. The Ultimate Square

Source : [Problem](https://codeforces.com/problemset/problem/1748/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You have n rectangular wooden blocks, which are numbered from 1 to n. The i-th block is 1 unit high and ⌈i / 2⌉ units long.

Here, ⌈x / 2⌉ denotes the result of division of x by 2, rounded up. For example, ⌈42⌉ = 2 and ⌈52⌉ = ⌈2.5⌉ = 3.

For example, if n = 5, then the blocks have the following sizes: 1 × 1, 1 × 1, 1 × 2, 1 × 2, 1 × 3.

<p align="center"><img src="https://espresso.codeforces.com/2d0a151f8cff3d8083496da4051fbc09f82c68a1.png"><br>The available blocks for n = 5</p>

Find the maximum possible side length of a square you can create using these blocks, without rotating any of them. Note that you don't have to use all of the blocks.

One of the ways to create 3 × 3 square using blocks 1 through 5

## Input

Each test contains multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

The first line of each test case contains a single integer n (1 ≤ n ≤ 10^9) — the number of blocks.

## Output

For each test case, print one integer — the maximum possible side length of a square you can create.

## Example

### Sample Input 1

    3
    2
    5
    197654321

### Sample Output 1

    1
    3
    98827161

## Note

In the first test case, you can create a 1 × 1
square using only one of the blocks.

In the second test case, one of the possible ways to create a 3 × 3 square is shown in the statement. It is impossible to create a 4 × 4 or larger square, so the answer is 3.
