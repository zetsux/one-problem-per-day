# A. Square Counting

Source : [Problem](https://codeforces.com/problemset/problem/1646/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Luis has a sequence of n + 1 integers a1, a2, …, an + 1. For each i = 1, 2, …, n + 1 it is guaranteed that 0 ≤ ai < n, or ai = n^2. He has calculated the sum of all the elements of the sequence, and called this value s.

Luis has lost his sequence, but he remembers the values of n
and s. Can you find the number of elements in the sequence that are equal to n^2?

We can show that the answer is unique under the given constraints.

## Input

Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 2 ⋅ 10^4). Description of the test cases follows.

The only line of each test case contains two integers n and s (1 ≤ n < 10^6, 0 ≤ s ≤ 10^18). It is guaranteed that the value of s is a valid sum for some sequence satisfying the above constraints.

## Output

For each test case, print one integer — the number of elements in the sequence which are equal to n^2.

## Example

### Sample Input 1

    4
    7 0
    1 1
    2 12
    3 12

### Sample Output 1

    0
    1
    3
    1

## Note

In the first test case, we have s = 0 so all numbers are equal to 0 and there isn't any number equal to 49.

In the second test case, we have s = 1. There are two possible sequences: [0,1] or [1,0]. In both cases, the number 1 appears just once.

In the third test case, we have s = 12, which is the maximum possible value of s
for this case. Thus, the number 4 appears 3 times in the sequence.
