# B. Turtle Math: Fast Three Task

Source : [Problem](https://codeforces.com/problemset/problem/1933/B)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given an array 𝑎1, 𝑎2, …, 𝑎𝑛.

In one move, you can perform either of the following two operations:

- Choose an element from the array and remove it from the array. As a result, the length of the array decreases by 1;
- Choose an element from the array and increase its value by 1.

You can perform any number of moves. If the current array becomes empty, then no more moves can be made.

Your task is to find the minimum number of moves required to make the sum of the elements of the array 𝑎 divisible by 3. It is possible that you may need 0 moves.

Note that the sum of the elements of an empty array (an array of length 0) is equal to 0.

## Input

The first line of the input contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 10^4) — the number of test cases.

The first line of each test case contains a single integer 𝑛 (1 ≤ 𝑛 ≤ 10^5).

The second line of each test case contains 𝑛 integers 𝑎1, 𝑎2, …, 𝑎𝑛 (1 ≤ 𝑎𝑖 ≤ 10^4).

The sum of 𝑛 over all test cases does not exceed 2 ⋅ 10^5.

## Output

For each test case, output a single integer: the minimum number of moves.

## Example

### Sample Input 1

    8
    4
    2 2 5 4
    3
    1 3 2
    4
    3 7 6 8
    1
    1
    4
    2 2 4 2
    2
    5 5
    7
    2 4 8 1 9 3 4
    2
    4 10

### Sample Output 1

    1
    0
    0
    1
    1
    2
    1
    1

## Note

In the first test case, initially the array 𝑎 = [2,2,5,4]. One of the optimal ways to make moves is:

- remove the current 4th element and get 𝑎 = [2,2,5];

As a result, the sum of the elements of the array 𝑎 will be divisible by 3 (indeed, 𝑎1 + 𝑎2 + 𝑎3 = 2 + 2 + 5 = 9).
In the second test case, initially, the sum of the array is 1 + 3 + 2 = 6, which is divisible by 3. Therefore, no moves are required. Hence, the answer is 0.

In the fourth test case, initially, the sum of the array is 1, which is not divisible by 3. By removing its only element, you will get an empty array, so its sum is 0. Hence, the answer is 1.
