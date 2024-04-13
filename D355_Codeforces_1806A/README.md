# A. Walking Master

Source : [Problem](https://codeforces.com/problemset/problem/1806/A)

- time limit per test 1 second
- memory limit per test 1024 megabytes
- input standard input
- output standard output

YunQian is standing on an infinite plane with the Cartesian coordinate system on it. In one move, she can move to the diagonally adjacent point on the top right or the adjacent point on the left.

That is, if she is standing on point (𝑥, 𝑦), she can either move to point (𝑥 + 1, 𝑦 + 1) or point (𝑥 − 1, 𝑦).

YunQian initially stands at point (𝑎, 𝑏) and wants to move to point (𝑐, 𝑑). Find the minimum number of moves she needs to make or declare that it is impossible.

## Input

The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 10^4) — the number of test cases. The description of test cases follows.

The first line and only line of each test case contain four integers 𝑎, 𝑏, 𝑐, 𝑑 (−10^8 ≤ 𝑎, 𝑏, 𝑐, 𝑑 ≤ 10^8).

## Output

For each test case, if it is possible to move from point (𝑎,𝑏) to point (𝑐,𝑑), output the minimum number of moves. Otherwise, output −1.

## Example

### Sample Input 1

    6
    -1 0 -1 2
    0 0 4 5
    -2 -1 1 1
    -3 2 -3 2
    2 -1 -1 -1
    1 1 0 2

### Sample Output 1

    4
    6
    -1
    0
    3
    3

## Note

In the first test case, one possible way using 4 moves is (−1, 0) → (0, 1) → (−1, 1) → (0, 2) → (−1, 2). It can be proven that it is impossible to move from point (−1, 0) to point (−1, 2) in less than 4 moves.
