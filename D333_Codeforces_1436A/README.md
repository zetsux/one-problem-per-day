# A. Reorder

Source : [Problem](https://codeforces.com/problemset/problem/1436/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

For a given array 𝑎 consisting of 𝑛 integers and a given integer 𝑚 find if it is possible to reorder elements of the array 𝑎 in such a way that ∑𝑛 𝑖=1 ∑𝑛 𝑗=𝑖 𝑎𝑗 / 𝑗 equals 𝑚? It is forbidden to delete elements as well as insert new elements. Please note that no rounding occurs during division, for example, 5 / 2 = 2.5.

## Input

The first line contains a single integer 𝑡 — the number of test cases (1 ≤ 𝑡 ≤ 100). The test cases follow, each in two lines.

The first line of a test case contains two integers 𝑛 and 𝑚 (1 ≤ 𝑛 ≤ 100, 0 ≤ 𝑚 ≤ 10^6). The second line contains integers 𝑎1, 𝑎2, …, 𝑎𝑛 (0 ≤ 𝑎𝑖 ≤ 10^6) — the elements of the array.

## Output

For each test case print "YES", if it is possible to reorder the elements of the array in such a way that the given formula gives the given value, and "NO" otherwise.

## Example

### Sample Input 1

    2
    3 8
    2 5 1
    4 4
    0 1 2 3

### Sample Output 1

    YES
    NO

## Note

In the first test case one of the reorders could be [1,2,5]. The sum is equal to (11 + 22 + 53) + (22 + 53) + (53) = 8. The brackets denote the inner sum ∑𝑛 𝑗=𝑖 𝑎𝑗 / 𝑗, while the summation of brackets corresponds to the sum over 𝑖.
