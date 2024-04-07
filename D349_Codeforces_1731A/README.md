# A. Joey Takes Money

Source : [Problem](https://codeforces.com/problemset/problem/1731/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Joey is low on money. His friend Chandler wants to lend Joey some money, but can't give him directly, as Joey is too proud of himself to accept it. So, in order to trick him, Chandler asks Joey to play a game.

In this game, Chandler gives Joey an array 𝑎1, 𝑎2, …, 𝑎𝑛 (𝑛 ≥ 2) of positive integers (𝑎𝑖 ≥ 1).

Joey can perform the following operation on the array any number of times:

- Take two indices 𝑖 and 𝑗 (1 ≤ 𝑖<𝑗 ≤ 𝑛).
- Choose two integers 𝑥 and 𝑦 (𝑥, 𝑦 ≥ 1) such that 𝑥 ⋅ 𝑦 = 𝑎𝑖 ⋅ 𝑎𝑗.
- Replace 𝑎𝑖 by 𝑥 and 𝑎𝑗 by 𝑦.

In the end, Joey will get the money equal to the sum of elements of the final array.

Find the maximum amount of money ans Joey can get but print 2022⋅ans. Why multiplied by 2022? Because we are never gonna see it again!

It is guaranteed that the product of all the elements of the array 𝑎 doesn't exceed 1012.

## Input

Each test contains multiple test cases. The first line contains the number of test cases 𝑡 (1 ≤ 𝑡 ≤ 4000). Description of the test cases follows.

The first line of each test case contains a single integer 𝑛 (2 ≤ 𝑛 ≤ 50) — the length of the array 𝑎.

The second line contains 𝑛 integers 𝑎1, 𝑎2, …, 𝑎𝑛 (1 ≤ 𝑎𝑖 ≤ 10^6) — the array itself.

It's guaranteed that the product of all 𝑎𝑖 doesn't exceed 1012 (i.e. 𝑎1 ⋅ 𝑎2 ⋅ … ⋅ 𝑎𝑛 ≤ 10^12).

## Output

For each test case, print the maximum money Joey can get multiplied by 2022.

## Example

### Sample Input 1

    3
    3
    2 3 2
    2
    1 3
    3
    1000000 1000000 1

### Sample Output 1

    28308
    8088
    2022000000004044

## Note

In the first test case, Joey can do the following:

He chooses 𝑖 = 1 and 𝑗 = 2 (so he has 𝑎[𝑖] ⋅ 𝑎[𝑗] = 6), chooses 𝑥 = 6 and 𝑦 = 1 and makes 𝑎[𝑖] = 6 and 𝑎[𝑗] = 1.

He chooses 𝑖 = 1 and 𝑗 = 3 (so he has 𝑎[𝑖] ⋅ 𝑎[𝑗] = 12), chooses 𝑥 = 12 and 𝑦 = 1 and makes 𝑎[𝑖] = 12 and 𝑎[𝑗] = 1.

The sum is 14 which is the maximum of all possible sums. The answer is 2022 ⋅ 14 = 28308.
