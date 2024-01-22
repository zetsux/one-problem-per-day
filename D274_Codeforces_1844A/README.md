# A. Subtraction Game

Source : [Problem](https://codeforces.com/problemset/problem/1844/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given two positive integers, a and b (a < b).

For some positive integer n, two players will play a game starting with a pile of n
stones. They take turns removing exactly a or exactly b stones from the pile. The player who is unable to make a move loses.

Find a positive integer n such that the second player to move in this game has a winning strategy. This means that no matter what moves the first player makes, the second player can carefully choose their moves (possibly depending on the first player's moves) to ensure they win.

## Input

Each test contains multiple test cases. The first line contains the number of test cases t
(1 ≤ t ≤ 100). The description of the test cases follows.

The only line of each test case contains two integers, a
and b (1 ≤ a < b ≤ 100).

## Output

For each test case, output any positive integer n (1 ≤ n ≤ 10^6) such that the second player to move wins.

It can be proven that such an n always exists under the constraints of the problem.

## Example

### Sample Input 1

    3
    1 4
    1 5
    9 26

### Sample Output 1

    2
    6
    3

## Note

In the first test case, when n = 2, the first player must remove a = 1 stone. Then, the second player can respond by removing a = 1 stone. The first player can no longer make a move, so the second player wins.

In the second test case, when n = 6, the first player has two options:

- If they remove b = 5 stones, then the second player can respond by removing a = 1 stone. The first player can no longer make a move, so the second player wins.
- If they remove a = 1 stone, then the second player can respond by removing a = 1 stone. Afterwards, the players can only alternate removing exactly a=1 stone. The second player will take the last stone and win.

Since the second player has a winning strategy no matter what the first player does, this is an acceptable output.

In the third test case, the first player cannot make any moves when n = 3, so the second player immediately wins.
