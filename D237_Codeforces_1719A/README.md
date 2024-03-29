# A. Chip Game

Source : [Problem](https://codeforces.com/problemset/problem/1719/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Burenka and Tonya are playing an old Buryat game with a chip on a board of n × m cells.

At the beginning of the game, the chip is located in the lower left corner of the board. In one move, the player can move the chip to the right or up by any odd number of cells (but you cannot move the chip both to the right and up in one move). The one who cannot make a move loses.

Burenka makes the first move, the players take turns. Burenka really wants to win the game, but she is too lazy to come up with a strategy, so you are invited to solve the difficult task of finding it. Name the winner of the game (it is believed that Burenka and Tonya are masters of playing with chips, so they always move in the optimal way).

<p align="center"><img src="https://espresso.codeforces.com/d4185396c087b9056e6aa3e8fa3d5fbbaabbccbf.png"><br>Chip's starting cell is green, the only cell from which chip can't move is red. if the chip is in the yellow cell, then blue cells are all options to move the chip in one move.</p>

## Input

The first line contains one integer t
(1 ≤ t ≤ 10^4) — the number of test cases. The following is a description of the input data sets.

The only line of each test case contains two integers n
and m
(1≤n,m≤109
) — the dimensions of the game board.

## Output

For each test case print a single line — the name of the winner of the game ("Burenka" or "Tonya").

## Example

### Sample Input 1

    6
    1 1
    1 4
    5 6
    2 2
    6 3
    999999999 1000000000

### Sample Output 1

    Tonya
    Burenka
    Burenka
    Tonya
    Burenka
    Burenka

## Note

In the first case, Burenka has no move, so Tonya wins.

In the second case, Burenka can move 3
cells to the right, after which Tony will not be able to make a move, which means that Burenka wins.

In the third case, Burenka can move 5
squares to the right. Then we can say that we have a game on a board of 1×5
cells, and Tonya is the first player. In such game the second player wins, so in the original one Burenka will win.
