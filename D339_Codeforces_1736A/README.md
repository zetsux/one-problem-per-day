# A. Make A Equal to B

Source : [Problem](https://codeforces.com/problemset/problem/1736/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given two arrays 𝑎 and 𝑏 of 𝑛 elements, each element is either 0 or 1.

You can make operations of 2 kinds.

- Pick an index 𝑖 and change 𝑎𝑖 to 1−𝑎𝑖.
- Rearrange the array 𝑎 however you want.

Find the minimum number of operations required to make 𝑎 equal to 𝑏.

## Input

Each test contains multiple test cases. The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 400) — the number of test cases. Description of the test cases follows.

The first line of each test case contains a single integer 𝑛 (1 ≤ 𝑛 ≤ 100) — the length of the arrays 𝑎 and 𝑏.

The second line of each test case contains 𝑛 space-separated integers 𝑎1, 𝑎2, …, 𝑎𝑛 (𝑎𝑖 is 0 or 1), representing the array 𝑎.

The third line of each test case contains 𝑛 space-separated integers 𝑏1, 𝑏2, …, 𝑏𝑛 (𝑏𝑖 is 0 or 1), representing the array 𝑏.

## Output

For each test case, print the minimum number of operations required to make 𝑎 equal to 𝑏.

## Example

### Sample Input 1

    5
    3
    1 0 1
    0 0 1
    4
    1 1 0 0
    0 1 1 1
    2
    1 1
    1 1
    4
    1 0 0 1
    0 1 1 0
    1
    0
    1

### Sample Output 1

    1
    2
    0
    1
    1

## Note

In the first case, we need only one operation: change 𝑎1 to 1 − 𝑎𝑖. Now 𝑎 = [0,0] which is equal to 𝑏.

In the second case, the optimal way is to rearrange 𝑎 to get the array [0,1,11]. Now 𝑎 = [0,0,1] which is equal to 𝑏.

In the second case, one of optimal ways would be to first change 𝑎3 to 1 − 𝑎3, then rearrange 𝑎.

In the third case, no operation is needed.

In the fourth case, the optimal way is to rearrange 𝑎 to get the array [0,1,1,0].
