# A. Planets

Source : [Problem](https://codeforces.com/problemset/problem/1730/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

One day, Vogons wanted to build a new hyperspace highway through a distant system with 𝑛 planets. The 𝑖-th planet is on the orbit 𝑎𝑖, there could be multiple planets on the same orbit. It's a pity that all the planets are on the way and need to be destructed.

Vogons have two machines to do that.

- The first machine in one operation can destroy any planet at cost of 1 Triganic Pu.
- The second machine in one operation can destroy all planets on a single orbit in this system at the cost of 𝑐 Triganic Pus.

Vogons can use each machine as many times as they want.

Vogons are very greedy, so they want to destroy all planets with minimum amount of money spent. Can you help them to know the minimum cost of this project?

## Input

The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 100) — the number of test cases. Then the test cases follow.

Each test case consists of two lines.

The first line contains two integers 𝑛 and 𝑐 (1 ≤ 𝑛,𝑐 ≤ 100) — the number of planets and the cost of the second machine usage.

The second line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1 ≤ 𝑎𝑖 ≤ 100), where 𝑎𝑖 is the orbit of the 𝑖-th planet.

## Output

For each test case print a single integer — the minimum cost of destroying all planets.

## Examples

### Sample Input 1

    4
    10 1
    2 1 4 5 2 4 5 5 1 2
    5 2
    3 2 1 2 2
    2 2
    1 1
    2 2
    1 2

### Sample Output 1

    4
    4
    2
    2

### Sample Input 2

    1
    1 100
    1

### Sample Output 2

    1

## Note

In the first test case, the cost of using both machines is the same, so you can always use the second one and destroy all planets in orbit 1, all planets in orbit 2, all planets in orbit 4, all planets in orbit 5.

In the second test case, it is advantageous to use the second machine for 2 Triganic Pus to destroy all the planets in orbit 2, then destroy the remaining two planets using the first machine.

In the third test case, you can use the first machine twice or the second machine once.

In the fourth test case, it is advantageous to use the first machine twice.
