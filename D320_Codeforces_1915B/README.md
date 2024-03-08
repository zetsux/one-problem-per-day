# B. Not Quite Latin Square

Source : [Problem](https://codeforces.com/problemset/problem/1915/B)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

A Latin square is a 3×3 grid made up of the letters A, B, and C such that:

- in each row, the letters A, B, and C each appear once, and
- in each column, the letters A, B, and C each appear once.

For example, one possible Latin square is shown below.

<pre>
| A B C |
| C A B |
| B C A |
</pre>

You are given a Latin square, but one of the letters was replaced with a question mark ?. Find the letter that was replaced.

## Input

The first line of the input contains a single integer t (1 ≤ t ≤ 10^8) — the number of testcases.

Each test case contains three lines, each consisting of three characters, representing the Latin square. Each character is one of A, B, C, or ?.

Each test case is a Latin square with exactly one of the letters replaced with a question mark ?.

## Output

For each test case, output the letter that was replaced.

## Example

### Sample Input 1

    3
    ABC
    C?B
    BCA
    BCA
    CA?
    ABC
    ?AB
    BCA
    ABC

### Sample Output 1

    A
    B
    C

## Note

The correct Latin squares for the three test cases are shown below:

<pre>
| A C B |
| B A C |
| C B A |

| B C A |
| C A B |
| A B C |

| C B A |
| A C B |
| B A C |
</pre>
