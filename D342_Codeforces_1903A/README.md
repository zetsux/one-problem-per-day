# A. Halloumi Boxes

Source : [Problem](https://codeforces.com/problemset/problem/1903/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Theofanis is busy after his last contest, as now, he has to deliver many halloumis all over the world. He stored them inside 𝑛 boxes and each of which has some number 𝑎𝑖 written on it.

He wants to sort them in non-decreasing order based on their number, however, his machine works in a strange way. It can only reverse any subarray† of boxes with length at most 𝑘.

Find if it's possible to sort the boxes using any number of reverses.

† Reversing a subarray means choosing two indices 𝑖 and 𝑗 (where 1 ≤ 𝑖 ≤ 𝑗 ≤ 𝑛) and changing the array 𝑎1, 𝑎2, …, 𝑎𝑛 to 𝑎1, 𝑎2, …, 𝑎𝑖−1, 𝑎𝑗, 𝑎𝑗−1, …, 𝑎𝑖, 𝑎𝑗+1, …, 𝑎𝑛−1, 𝑎𝑛. The length of the subarray is then 𝑗−𝑖+1.

## Input

The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 100) — the number of test cases.

Each test case consists of two lines.

The first line of each test case contains two integers 𝑛 and 𝑘 (1 ≤ 𝑘 ≤ 𝑛 ≤ 100) — the number of boxes and the length of the maximum reverse that Theofanis can make.

The second line contains 𝑛 integers 𝑎1, 𝑎2, …, 𝑎𝑛 (1 ≤ 𝑎𝑖 ≤ 109) — the number written on each box.

## Output

For each test case, print YES (case-insensitive), if the array can be sorted in non-decreasing order, or NO (case-insensitive) otherwise.

## Example

### Sample Input 1

    5
    3 2
    1 2 3
    3 1
    9 9 9
    4 4
    6 4 2 1
    4 3
    10 3 830 14
    2 1
    3 1

### Sample Output 1

    YES
    YES
    YES
    YES
    NO

## Note

In the first two test cases, the boxes are already sorted in non-decreasing order.

In the third test case, we can reverse the whole array.

In the fourth test case, we can reverse the first two boxes and the last two boxes.

In the fifth test case, it can be shown that it's impossible to sort the boxes.
