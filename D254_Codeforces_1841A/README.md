# A. Game with Board

Source : [Problem](https://codeforces.com/problemset/problem/1841/A)

- time limit per test 2 seconds
- memory limit per test 512 megabytes
- input standard input
- output standard output

Alice and Bob play a game. They have a blackboard; initially, there are n integers written on it, and each integer is equal to 1.

Alice and Bob take turns; Alice goes first. On their turn, the player has to choose several (at least two) equal integers on the board, wipe them and write a new integer which is equal to their sum.

For example, if the board currently contains integers {1,1,2,2,2,3}, then the following moves are possible:

- choose two integers equal to 1, wipe them and write an integer 2, then the board becomes {2,2,2,2,3};
- choose two integers equal to 2, wipe them and write an integer 4, then the board becomes {1,1,2,3,4};
- choose three integers equal to 2, wipe them and write an integer 6, then the board becomes {1,1,3,6}.

If a player cannot make a move (all integers on the board are different), that player wins the game.

Determine who wins if both players play optimally.

## Input

The first line contains one integer t (1 ≤ t ≤ 99) — the number of test cases.

Each test case consists of one line containing one integer n (2 ≤ n ≤ 100) — the number of integers equal to 1
on the board.

## Output

For each test case, print Alice if Alice wins when both players play optimally. Otherwise, print Bob.

## Example

### Sample Input 1

    2
    3
    6

### Sample Output 1

    Bob
    Alice

## Note

In the first test case, n=3, so the board initially contains integers {1,1,1}. We can show that Bob can always win as follows: there are two possible first moves for Alice.

- if Alice chooses two integers equal to 1, wipes them and writes 2, the board becomes {1,2}. Bob cannot make a move, so he wins;
- if Alice chooses three integers equal to 1, wipes them and writes 3, the board becomes {3}. Bob cannot make a move, so he wins.

In the second test case, n=6, so the board initially contains integers {1,1,1,1,1,1}. Alice can win by, for example, choosing two integers equal to 1, wiping them and writing 2 on the first turn. Then the board becomes {1,1,1,1,2}, and there are three possible responses for Bob:

- if Bob chooses four integers equal to 1, wipes them and writes 4, the board becomes {2,4}. Alice cannot make a move, so she wins;
- if Bob chooses three integers equal to 1, wipes them and writes 3, the board becomes {1,2,3}. Alice cannot make a move, so she wins;
- if Bob chooses two integers equal to 1, wipes them and writes 2, the board becomes {1,1,2,2}. Alice can continue by, for example, choosing two integers equal to 2, wiping them and writing 4. Then the board becomes {1,1,4}. The only possible response for Bob is to choose two integers equal to 1 and write 2 instead of them; then the board becomes {2,4}, Alice cannot make a move, so she wins.
