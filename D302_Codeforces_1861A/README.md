# A. Prime Deletion

Source : [Problem](https://codeforces.com/problemset/problem/1861/A)

- time limit per test 2 seconds
- memory limit per test 512 megabytes
- input standard input
- output standard output

A prime number is a positive integer that has exactly two different positive divisors: 1 and the integer itself. For example, 2, 3, 13 and 101 are prime numbers; 1, 4, 6 and 42 are not.

You are given a sequence of digits from 1 to 9, in which every digit from 1 to 9 appears exactly once.

You are allowed to do the following operation several (maybe zero) times: choose any digit from the sequence and delete it. However, you cannot perform this operation if the sequence consists of only two digits.

Your goal is to obtain a sequence which represents a prime number. Note that you cannot reorder the digits in the sequence.

Print the resulting sequence, or report that it is impossible to perform the operations so that the resulting sequence is a prime number.

## Input

The first line contains one integer t (1 ≤ t ≤ 5000) — the number of test cases.

Each test case consists of one line containing a string of 9 digits (without any characters between them). Each digit from 1 to 9 appears in this string exactly once.

## Output

For each test case, print the answer on a separate line as follows:

- if it is impossible to perform the described operations, print −1;
- otherwise, print any sequence that represents a prime number, which can be obtained from the given string performing several (maybe zero) operations described in the statement. If there are multiple such sequences, you can print any one of them.

## Example

### Sample Input 1

    4
    123456789
    987654321
    243567918
    576318429

### Sample Output 1

    167
    53
    3571
    57638429
