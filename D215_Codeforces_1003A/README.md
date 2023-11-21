# A. Polycarp's Pockets

Source : [Problem](https://codeforces.com/problemset/problem/1003/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Polycarp has n coins, the value of the i-th coin is ai. Polycarp wants to distribute all the coins between his pockets, but he cannot put two coins with the same value into the same pocket.

For example, if Polycarp has got six coins represented as an array a=[1,2,4,3,3,2], he can distribute the coins into two pockets as follows: [1,2,3],[2,3,4].

Polycarp wants to distribute all the coins with the minimum number of used pockets. Help him to do that.

## Input

The first line of the input contains one integer n (1 ≤ n ≤ 100) — the number of coins.

The second line of the input contains n integers a1, a2, …, an (1 ≤ ai ≤ 100) — values of coins.

## Output

Print only one integer — the minimum number of pockets Polycarp needs to distribute all the coins so no two coins with the same value are put into the same pocket.

## Examples

### Sample Input 1

    6
    1 2 4 3 3 2

### Sample Output 1

    2

### Sample Input 2

    1
    100

### Sample Output 2

    1
