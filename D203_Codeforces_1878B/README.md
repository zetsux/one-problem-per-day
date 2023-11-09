# B. Aleksa and Stack

Source : [Problem](https://codeforces.com/problemset/problem/1878/B)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

After the Serbian Informatics Olympiad, Aleksa was very sad, because he didn't win a medal (he didn't know stack), so Vasilije came to give him an easy problem, just to make his day better.

Vasilije gave Aleksa a positive integer n (n ≥ 3) and asked him to construct a strictly increasing array of size n
of positive integers, such that

- 3 ⋅ ai+2 is not divisible by ai + ai + 1 for each i (1 ≤ i ≤ n − 2).

Note that a strictly increasing array a
of size n is an array where ai < ai + 1
for each i (1 ≤ i ≤ n − 1).
Since Aleksa thinks he is a bad programmer now, he asked you to help him find such an array.

## Input

Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases. The description of test cases follows.

The first line of each test case contains a single integer n (3 ≤ n ≤ 2 ⋅ 10^5) — the number of elements in array.

It is guaranteed that the sum of n over all test cases does not exceed 2 ⋅ 10^5.

## Output

For each test case, output n
integers a1, a2, a3, …, an (1 ≤ ai ≤ 10^9).

It can be proved that the solution exists for any n. If there are multiple solutions, output any of them.

## Example

### Sample Input 1

    3
    3
    6
    7

### Sample Output 1

    6 8 12
    7 11 14 20 22 100
    9 15 18 27 36 90 120

## Note

In the first test case, a1 = 6, a2 = 8, a3 = 12, so a1 + a2 = 14 and 3 ⋅ a3 = 36, so 3 ⋅ a3 is not divisible by a1 + a2.
