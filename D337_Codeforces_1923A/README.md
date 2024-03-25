# A. Moving Chips

Source : [Problem](https://codeforces.com/problemset/problem/1923/A)

- time limit per test 2 seconds
- memory limit per test 512 megabytes
- input standard input
- output standard output

There is a ribbon divided into 𝑛 cells, numbered from 1 to 𝑛 from left to right. Each cell either contains a chip or is free.

You can perform the following operation any number of times (possibly zero): choose a chip and move it to the closest free cell to the left. You can choose any chip that you want, provided that there is at least one free cell to the left of it. When you move the chip, the cell where it was before the operation becomes free.

Your goal is to move the chips in such a way that they form a single block, without any free cells between them. What is the minimum number of operations you have to perform?

## Input

The first line contains one integer 𝑡 (1 ≤ 𝑡 ≤ 1000) — the number of test cases.

Each test case consists of two lines:

- the first line contains one integer 𝑛 (2 ≤ 𝑛 ≤ 50) — the number of cells;
- the second line contains 𝑛 integers 𝑎1, 𝑎2, …, 𝑎𝑛 (0 ≤ 𝑎𝑖 ≤ 1); 𝑎𝑖 = 0 means that the 𝑖-th cell is free; 𝑎𝑖 = 1 means that the 𝑖-th cell contains a chip.

Additional constraint on the input: in each test case, at least one cell contains a chip.

## Output

For each test case, print one integer — the minimum number of operations you have to perform so that all chips form a single block without any free cells between them.

## Example

### Sample Input 1

    5
    8
    0 1 1 1 0 1 1 0
    6
    0 1 0 0 0 0
    6
    1 1 1 1 1 1
    5
    1 0 1 0 1
    9
    0 1 1 0 0 0 1 1 0

### Sample Output 1

    1
    0
    0
    2
    3

## Note

In the first example, you can perform the operation on the chip in the 7-th cell. The closest free cell to the left is the 5-th cell, so it moves there. After that, all chips form a single block.

In the second example, all chips are already in a single block. Same for the third example.
