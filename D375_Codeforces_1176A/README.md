# A. Divide it!

Source : [Problem](https://codeforces.com/problemset/problem/1176/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given an integer 𝑛.

You can perform any of the following operations with this number an arbitrary (possibly, zero) number of times:

- Replace 𝑛 with 𝑛 / 2 if 𝑛 is divisible by 2;
- Replace 𝑛 with 2𝑛 / 3 if 𝑛 is divisible by 3;
- Replace 𝑛 with 4𝑛 / 5 if 𝑛 is divisible by 5.

For example, you can replace 30 with 15 using the first operation, with 20 using the second operation or with 24 using the third operation.

Your task is to find the minimum number of moves required to obtain 1 from 𝑛 or say that it is impossible to do it.

You have to answer 𝑞 independent queries.

## Input

The first line of the input contains one integer 𝑞 (1 ≤ 𝑞 ≤ 1000) — the number of queries.

The next 𝑞 lines contain the queries. For each query you are given the integer number 𝑛 (1 ≤ 𝑛 ≤ 10^18).

## Output

Print the answer for each query on a new line. If it is impossible to obtain 1 from 𝑛, print -1. Otherwise, print the minimum number of moves required to do it.

## Example

### Sample Input 1

    7
    1
    10
    25
    30
    14
    27
    1000000000000000000

### Sample Output 1

    0
    4
    6
    6
    -1
    6
    72
