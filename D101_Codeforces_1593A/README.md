# A. Elections

Source : [Problem](https://codeforces.com/problemset/problem/1593/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

The elections in which three candidates participated have recently ended. The first candidate received a votes, the second one received b votes, the third one received c votes. For each candidate, solve the following problem: how many votes should be added to this candidate so that he wins the election (i.e. the number of votes for this candidate was strictly greater than the number of votes for any other candidate)?

Please note that for each candidate it is necessary to solve this problem independently, i.e. the added votes for any candidate do not affect the calculations when getting the answer for the other two candidates.

## Input

The first line contains one integer t (1 ≤ t ≤ 10^4) — the number of test cases. Then t
test cases follow.

Each test case consists of one line containing three integers a, b, and c (0 ≤ a, b, c ≤ 10^9).

## Output

For each test case, output in a separate line three integers A, B, and C (A, B, C ≥ 0) separated by spaces — the answers to the problem for the first, second, and third candidate, respectively.

## Example

### Sample Input 1

    5
    0 0 0
    10 75 15
    13 13 17
    1000 0 0
    0 1000000000 0

### Sample Output 1

    1 1 1
    66 0 61
    5 5 0
    0 1001 1001
    1000000001 0 1000000001
