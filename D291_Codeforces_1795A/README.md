# A. Two Towers

Source : [Problem](https://codeforces.com/problemset/problem/1795/A)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

There are two towers consisting of blocks of two colors: red and blue. Both towers are represented by strings of characters B and/or R denoting the order of blocks in them from the bottom to the top, where B corresponds to a blue block, and R corresponds to a red block.

<p align="center"><img src="https://espresso.codeforces.com/ca3bc5b805f5b767905202c5ac882b2e8e2f7ead.png"><br>These two towers are represented by strings BRBB and RBR.</p>

You can perform the following operation any number of times: choose a tower with at least two blocks, and move its top block to the top of the other tower.

<p align="center"><img src="https://espresso.codeforces.com/1aef55eab166519c5e6d5a5c4f508f43e9cfdd6d.png"></p>

The pair of towers is beautiful if no pair of touching blocks has the same color; i. e. no red block stands on top of another red block, and no blue block stands on top of another blue block.

You have to check if it is possible to perform any number of operations (possibly zero) to make the pair of towers beautiful.

## Input

The first line contains one integer t (1 ≤ t ≤ 1000) — the number of test cases.

Each test case consists of three lines:

- the first line contains two integers n and m (1 ≤ n, m ≤ 20) — the number of blocks in the first tower and the number of blocks in the second tower, respectively;
- the second line contains s — a string of exactly n characters B and/or R, denoting the first tower;
- the third line contains t — a string of exactly m characters B and/or R, denoting the second tower.

## Output

For each test case, print YES if it is possible to perform several (possibly zero) operations in such a way that the pair of towers becomes beautiful; otherwise print NO.

You may print each letter in any case (YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).

## Example

### Sample Input 1

    4
    4 3
    BRBB
    RBR
    4 7
    BRBR
    RRBRBRB
    3 4
    RBR
    BRBR
    5 4
    BRBRR
    BRBR

### Sample Output 1

    YES
    YES
    YES
    NO

## Note

In the first test case, you can move the top block from the first tower to the second tower (see the third picture).

In the second test case, you can move the top block from the second tower to the first tower 6
times.

In the third test case, the pair of towers is already beautiful.
