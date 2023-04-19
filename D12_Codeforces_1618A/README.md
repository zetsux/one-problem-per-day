# A. Polycarp and Sums of Subsequences

Source : [Problem](https://codeforces.com/problemset/problem/1618/A)

-   time limit per test 1 second
-   memory limit per test 256 megabytes
-   input standard input
-   output standard output

Polycarp had an array a of 3 positive integers. He wrote out the sums of all non-empty subsequences of this array, sorted them in non-decreasing order, and got an array b of 7 integers.

For example, if a={1,4,3}, then Polycarp wrote out 1, 4, 3, 1+4=5, 1+3=4, 4+3=7, 1+4+3=8. After sorting, he got an array b={1,3,4,4,5,7,8}. Unfortunately, Polycarp lost the array a. He only has the array b left. Help him to restore the array a.

## Input

The first line contains one integer t (1 ≤ t ≤ 5000) — the number of test cases.

Each test case consists of one line which contains 7 integers b1, b2, …, b7 (1 ≤ bi ≤ 109; bi ≤ bi+1).

Additional constraint on the input: there exists at least one array a which yields this array b as described in the statement.

## Output

For each test case, print 3 integers — a1, a2 and a3. If there can be several answers, print any of them.

## Example

### Input

    5
    1 3 4 4 5 7 8
    1 2 3 4 5 6 7
    300000000 300000000 300000000 600000000 600000000 600000000 900000000
    1 1 2 999999998 999999999 999999999 1000000000
    1 2 2 3 3 4 5

### Output

    1 4 3
    4 1 2
    300000000 300000000 300000000
    999999998 1 1
    1 2 2

## Note

The subsequence of the array a is a sequence that can be obtained from a by removing zero or more of its elements.

Two subsequences are considered different if index sets of elements included in them are different. That is, the values of the elements don't matter in the comparison of subsequences. In particular, any array of length 3 has exactly 7 different non-empty subsequences.
