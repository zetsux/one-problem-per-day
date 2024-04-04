# C. Bun Lover

Source : [Problem](https://codeforces.com/problemset/problem/1822/C)

- time limit per test 3 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

Tema loves cinnabon rolls — buns with cinnabon and chocolate in the shape of a "snail".

Cinnabon rolls come in different sizes and are square when viewed from above. The most delicious part of a roll is the chocolate, which is poured in a thin layer over the cinnabon roll in the form of a spiral and around the bun, as in the following picture:

<p align="center"><img src="https://espresso.codeforces.com/883110c5011d3c0b7480d539e73ab22ba73d6db0.png"><br>Cinnabon rolls of sizes 4, 5, 6</p>

For a cinnabon roll of size 𝑛, the length of the outer side of the square is 𝑛, and the length of the shortest vertical chocolate segment in the central part is one.

Formally, the bun consists of two dough spirals separated by chocolate. A cinnabon roll of size 𝑛+1 is obtained from a cinnabon roll of size 𝑛 by wrapping each of the dough spirals around the cinnabon roll for another layer.

It is important that a cinnabon roll of size 𝑛 is defined in a unique way.

Tema is interested in how much chocolate is in his cinnabon roll of size 𝑛. Since Tema has long stopped buying small cinnabon rolls, it is guaranteed that 𝑛≥4.

Answer this non-obvious question by calculating the total length of the chocolate layer.

## Input

The first line of the input contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 10^5) — the number of test cases.

The following 𝑡 lines describe the test cases.

Each test case is described by a single integer 𝑛 (4 ≤ 𝑛 ≤ 10^9) — the size of the cinnabon roll.

## Output

Output 𝑡 integers. The 𝑖-th of them should be equal to the total length of the chocolate layer in the 𝑖-th test case.

## Example

### Sample Input 1

    4
    4
    5
    6
    179179179

### Sample Output 1

    26
    37
    50
    32105178545472401
