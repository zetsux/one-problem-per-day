# A. GamingForces

Source : [Problem](https://codeforces.com/problemset/problem/1792/A)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

Monocarp is playing a computer game. He's going to kill n monsters, the i-th of them has hi health.

Monocarp's character has two spells, either of which he can cast an arbitrary number of times (possibly, zero) and in an arbitrary order:

- choose exactly two alive monsters and decrease their health by 1;
- choose a single monster and kill it.

When a monster's health becomes 0, it dies.

What's the minimum number of spell casts Monocarp should perform in order to kill all monsters?

## Input

The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of testcases.

The first line of each testcase contains a single integer n (1 ≤ n ≤ 100) — the number of monsters.

The second line contains n integers h1, h2, …, hn (1 ≤ hi ≤ 100) — the health of each monster.

The sum of n over all testcases doesn't exceed 2 ⋅ 10^4.

## Output

For each testcase, print a single integer — the minimum number of spell casts Monocarp should perform in order to kill all monsters.

## Example

### Sample Input 1

    3
    4
    1 2 1 2
    3
    2 4 2
    5
    1 2 3 4 5

### Sample Output 1

    3
    3
    5

## Note

In the first testcase, the initial health list is [1,2,1,2]. Three spells are casted:

- the first spell on monsters 1 and 2 — monster 1 dies, monster 2 has now health 1, new health list is [0,1,1,2];
- the first spell on monsters 3 and 4 — monster 3 dies, monster 4 has now health 1, new health list is [0,1,0,1];
- the first spell on monsters 2 and 4 — both monsters 2 and 4 die.

In the second testcase, the initial health list is [2,4,2]. Three spells are casted:

- the first spell on monsters 1 and 3 — both monsters have health 1 now, new health list is [1,4,1];
- the second spell on monster 2 — monster 2 dies, new health list is [1,0,1];
- the first spell on monsters 1 and 3 — both monsters 1 and 3 die.

In the third testcase, the initial health list is [1,2,3,4,5]. Five spells are casted. The i-th of them kills the i-th monster with the second spell. Health list sequence: [1,2,3,4,5] → [0,2,3,4,5] → [0,0,3,4,5] → [0,0,0,4,5] → [0,0,0,0,5] → [0,0,0,0,0].
