# C. Can I Square?

Source : [Problem](https://codeforces.com/problemset/problem/1915/C)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Calin has 𝑛 buckets, the 𝑖-th of which contains 𝑎𝑖 wooden squares of side length 1.

Can Calin build a square using all the given squares?

## Input

The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 10^4) — the number of test cases.

The first line of each test case contains a single integer 𝑛 (1 ≤ 𝑛 ≤ 2⋅10^5) — the number of buckets.

The second line of each test case contains 𝑛 integers 𝑎1,…,𝑎𝑛 (1 ≤ 𝑎𝑖 ≤ 10^9) — the number of squares in each bucket.

The sum of 𝑛 over all test cases does not exceed 2 ⋅ 10^5.

## Output

For each test case, output "YES" if Calin can build a square using all of the given 1×1 squares, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

## Example

### Sample Input 1

    5
    1
    9
    2
    14 2
    7
    1 2 3 4 5 6 7
    6
    1 3 5 7 9 11
    4
    2 2 2 2

### Sample Output 1

    YES
    YES
    NO
    YES
    NO

## Note

In the first test case, Calin can build a 3×3 square.

In the second test case, Calin can build a 4×4 square.

In the third test case, Calin cannot build a square using all the given squares.
