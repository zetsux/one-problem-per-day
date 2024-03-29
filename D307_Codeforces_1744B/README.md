# B. Even-Odd Increments

Source : [Problem](https://codeforces.com/problemset/problem/1744/B)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given n of integers a1, a2, …, an. Process q queries of two types:

- query of the form "0 xj": add the value xj to all even elements of the array a,
- query of the form "1 xj": add the value xj to all odd elements of the array a.

Note that when processing the query, we look specifically at the odd/even value of ai, not its index.

After processing each query, print the sum of the elements of the array a.

Please note that the answer for some test cases won't fit into 32-bit integer type, so you should use at least 64-bit integer type in your programming language (like long long for C++).

## Input

The first line of the input contains an integer t (1 ≤ t ≤ 10^4) — the number of test cases.

The descriptions of the test cases follow.

The first line of each test case contains two integers n and q (1 ≤ n, q ≤ 10^5) — the length of array a and the number of queries.

The second line of each test case contains exactly n integers: a1, a2, …, an (1 ≤ ai ≤ 10^9) — elements of the array a.

The following q lines contain queries as two integers typej and xj (0 ≤ typej ≤ 1, 1 ≤ xj ≤ 10^4).

It is guaranteed that the sum of values n over all test cases in a test does not exceed 10^5. Similarly, the sum of values q over all test cases does not exceed 10^5.

## Output

For each test case, print q numbers: the sum of the elements of the array a after processing a query.

## Example

### Sample Input 1

    4
    1 1
    1
    1 1
    3 3
    1 2 4
    0 2
    1 3
    0 5
    6 7
    1 3 2 4 10 48
    1 6
    0 5
    0 4
    0 5
    1 3
    0 12
    0 1
    6 7
    1000000000 1000000000 1000000000 11 15 17
    0 17
    1 10000
    1 51
    0 92
    0 53
    1 16
    0 1

### Sample Output 1

    2
    11
    14
    29
    80
    100
    100
    100
    118
    190
    196
    3000000094
    3000060094
    3000060400
    3000060952
    3000061270
    3000061366
    3000061366

## Note

In the first test case, the array a = [2] after the first query.

In the third test case, the array a is modified as follows: [1,3,2,4,10,48] → [7,9,2,4,10,48] → [7,9,7,9,15,53] → [7,9,7,9,15,53] → [10,12,10,12,18,56] → [22,24,22,24,30,68] → [23,25,23,25,31,69].
