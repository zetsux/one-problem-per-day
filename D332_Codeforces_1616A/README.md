# A. Integer Diversity

Source : [Problem](https://codeforces.com/problemset/problem/1616/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given 𝑛 integers 𝑎1, 𝑎2, …, 𝑎𝑛. You choose any subset of the given numbers (possibly, none or all numbers) and negate these numbers (i. e. change 𝑥 → (−𝑥)). What is the maximum number of different values in the array you can achieve?

## Input

The first line of input contains one integer 𝑡 (1 ≤ 𝑡 ≤ 100): the number of test cases.

The next lines contain the description of the 𝑡 test cases, two lines per a test case.

In the first line you are given one integer 𝑛 (1 ≤ 𝑛 ≤ 100): the number of integers in the array.

The second line contains 𝑛 integers 𝑎1, 𝑎2, …, 𝑎𝑛 (−100 ≤ 𝑎𝑖 ≤ 100).

## Output

For each test case, print one integer: the maximum number of different elements in the array that you can achieve negating numbers in the array.

## Example

### Sample Input 1

    3
    4
    1 1 2 2
    3
    1 2 3
    2
    0 0

### Sample Output 1

    4
    3
    1

## Note

In the first example we can, for example, negate the first and the last numbers, achieving the array [−1,1,2,−2] with four different values.

In the second example all three numbers are already different.

In the third example negation does not change anything.
