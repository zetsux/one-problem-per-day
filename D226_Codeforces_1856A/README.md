# A. Tales of a Sort

Source : [Problem](https://codeforces.com/problemset/problem/1856/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Alphen has an array of positive integers a of length n.

Alphen can perform the following operation:

- For all i from 1 to n, replace ai with max(0, ai − 1).

Alphen will perform the above operation until a is sorted, that is a satisfies a1 ≤ a2 ≤ … ≤ an. How many operations will Alphen perform? Under the constraints of the problem, it can be proven that Alphen will perform a finite number of operations.

## Input

Each test contains multiple test cases. The first line of input contains a single integer t (1 ≤ t ≤ 500) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n (2 ≤ n ≤ 50) — the length of the array a.

The second line of each test case contains n integers a1, a2, …, an (1 ≤ ai ≤ 10^9) — the elements of the array a.

## Output

For each test case, output a single integer — the number of operations that Alphen will perform.

## Example

### Sample Input 1

    7
    3
    1 2 3
    5
    2 1 2 1 2
    4
    3 1 5 4
    2
    7 7
    5
    4 1 3 2 5
    5
    2 3 1 4 5
    3
    1000000000 1 2

### Sample Output 1

    0
    2
    5
    0
    4
    3
    1000000000

## Note

In the first test case, we have a=[1,2,3]. Since a
is already sorted, Alphen will not need to perform any operations. So, the answer is 0.

In the second test case, we have a=[2,1,2,1,2]. Since a
is not initially sorted, Alphen will perform one operation to make a=[1,0,1,0,1]. After performing one operation, a is still not sorted, so Alphen will perform another operation to make a=[0,0,0,0,0]. Since a
is sorted, Alphen will not perform any other operations. Since Alphen has performed two operations in total, the answer is 2.
