# A. Sorting Parts

Source : [Problem](https://codeforces.com/problemset/problem/1637/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You have an array 𝑎 of length 𝑛. You can exactly once select an integer 𝑙𝑒𝑛 between 1 and 𝑛 − 1 inclusively, and then sort in non-decreasing order the prefix of the array of length 𝑙𝑒𝑛 and the suffix of the array of length 𝑛−𝑙𝑒𝑛 independently.

For example, if the array is 𝑎 = [3,1,4,5,2], and you choose 𝑙𝑒𝑛 = 2, then after that the array will be equal to [1,3,2,4,5].

Could it be that after performing this operation, the array will not be sorted in non-decreasing order?

## Input

There are several test cases in the input data. The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 100) — the number of test cases. This is followed by the test cases description.

The first line of each test case contains one integer 𝑛 (2 ≤ 𝑛 ≤ 10^4) — the length of the array.

The second line of the test case contains a sequence of integers 𝑎1,𝑎2,…,𝑎𝑛 (1 ≤ 𝑎𝑖 ≤ 10^9) — the array elements.

It is guaranteed that the sum of 𝑛 over all test cases does not exceed 10^4.

## Output

For each test case of input data, output "YES" (without quotes), if the array may be not sorted in non-decreasing order, output "NO" (without quotes) otherwise. You can output each letter in any case (uppercase or lowercase).

## Example

### Sample Input 1

    3
    3
    2 2 1
    4
    3 1 2 1
    5
    1 2 2 4 4

### Sample Output 1

    YES
    YES
    NO

## Note

In the first test case, it's possible to select 𝑙𝑒𝑛 = 1, then after operation, the array will not be sorted in non-decreasing order and will be equal to [2,1,2].

In the second test case, it's possible to select 𝑙𝑒𝑛 = 3, then after operation, the array will not be sorted in non-decreasing order and will be equal to [1,2,3,1].

In the third test case, the array will be sorted in non-decreasing order for every possible 𝑙𝑒𝑛.
