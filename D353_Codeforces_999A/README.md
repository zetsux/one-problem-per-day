# A. Mishka and Contest

Source : [Problem](https://codeforces.com/problemset/problem/999/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Mishka started participating in a programming contest. There are 𝑛 problems in the contest. Mishka's problem-solving skill is equal to 𝑘.

Mishka arranges all problems from the contest into a list. Because of his weird principles, Mishka only solves problems from one of the ends of the list. Every time, he chooses which end (left or right) he will solve the next problem from. Thus, each problem Mishka solves is either the leftmost or the rightmost problem in the list.

Mishka cannot solve a problem with difficulty greater than 𝑘. When Mishka solves the problem, it disappears from the list, so the length of the list decreases by 1. Mishka stops when he is unable to solve any problem from any end of the list.

How many problems can Mishka solve?

## Input

The first line of input contains two integers 𝑛 and 𝑘 (1 ≤ 𝑛, 𝑘 ≤ 100) — the number of problems in the contest and Mishka's problem-solving skill.

The second line of input contains 𝑛 integers 𝑎1, 𝑎2, …, 𝑎𝑛 (1 ≤ 𝑎𝑖 ≤ 100), where 𝑎𝑖 is the difficulty of the 𝑖-th problem. The problems are given in order from the leftmost to the rightmost in the list.

## Output

Print one integer — the maximum number of problems Mishka can solve.

## Examples

### Sample Input 1

    8 4
    4 2 3 1 5 1 6 4

### Sample Output 1

    5

### Sample Input 2

    5 2
    3 1 2 1 3

### Sample Output 2

    0

### Sample Input 3

    5 100
    12 34 55 43 21

### Sample Output 3

    5

## Note

In the first example, Mishka can solve problems in the following order: [4,2,3,1,5,1,6,4] → [2,3,1,5,1,6,4] → [2,3,1,5,1,6] → [3,1,5,1,6] → [1,5,1,6] → [5,1,6], so the number of solved problems will be equal to 5.

In the second example, Mishka can't solve any problem because the difficulties of problems from both ends are greater than 𝑘.

In the third example, Mishka's solving skill is so amazing that he can solve all the problems.
