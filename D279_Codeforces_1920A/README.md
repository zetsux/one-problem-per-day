# A. Satisfying Constraints

Source : [Problem](https://codeforces.com/problemset/problem/1920/A)

- time limit per test1 second
- memory limit per test256 megabytes
- inputstandard input
- outputstandard output

Alex is solving a problem. He has n constraints on what the integer k can be. There are three types of constraints:

1. k must be greater than or equal to some integer x;
2. k must be less than or equal to some integer x;
3. k must be not equal to some integer x.

Help Alex find the number of integers k that satisfy all n constraints. It is guaranteed that the answer is finite (there exists at least one constraint of type 1 and at least one constraint of type 2). Also, it is guaranteed that no two constraints are the exact same.

## Input

Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 500) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n (2 ≤ n ≤ 100) — the number of constraints.

The following n lines describe the constraints. Each line contains two integers a
and x (a ∈ {1, 2, 3}, 1 ≤ x ≤ 10^9). a
denotes the type of constraint. If a = 1, k must be greater than or equal to x. If a = 2, k must be less than or equal to x. If a = 3, k must be not equal to x.

It is guaranteed that there is a finite amount of integers satisfying all n constraints (there exists at least one constraint of type 1 and at least one constraint of type 2). It is also guaranteed that no two constraints are the exact same (in other words, all pairs (a ,x) are distinct).

## Output

For each test case, output a single integer — the number of integers k
that satisfy all n
constraints.

## Example

### Sample Input 1

    6
    4
    1 3
    2 10
    3 1
    3 5
    2
    1 5
    2 4
    10
    3 6
    3 7
    1 2
    1 7
    3 100
    3 44
    2 100
    2 98
    1 3
    3 99
    6
    1 5
    2 10
    1 9
    2 2
    3 2
    3 9
    5
    1 1
    2 2
    3 1
    3 2
    3 3
    6
    1 10000
    2 900000000
    3 500000000
    1 100000000
    3 10000
    3 900000001

### Sample Output 1

    7
    0
    90
    0
    0
    800000000

## Note

In the first test case, k ≥ 3 and k ≤ 10. Furthermore, k ≠ 1 and k ≠ 5. The possible integers k that satisfy the constraints are 3, 4, 6, 7, 8, 9, 10. So the answer is 7.

In the second test case, k ≥ 5 and k ≤ 4, which is impossible. So the answer is 0
