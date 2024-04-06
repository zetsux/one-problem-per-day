# A. Cancel the Trains

Source : [Problem](https://codeforces.com/problemset/problem/1453/A)

- time limit per test 1 second
- memory limit per test 512 megabytes
- input standard input
- output standard output

Gildong's town has a train system that has 100 trains that travel from the bottom end to the top end and 100 trains that travel from the left end to the right end. The trains starting from each side are numbered from 1 to 100, respectively, and all trains have the same speed. Let's take a look at the picture below.

The train system can be represented as coordinates on a 2D plane. The 𝑖-th train starting at the bottom end is initially at (𝑖, 0) and will be at (𝑖, 𝑇) after 𝑇 minutes, and the 𝑖-th train starting at the left end is initially at (0, 𝑖) and will be at (𝑇, 𝑖) after 𝑇 minutes. All trains arrive at their destinations after 101 minutes.

However, Gildong found that some trains scheduled to depart at a specific time, simultaneously, are very dangerous. At this time, 𝑛 trains are scheduled to depart from the bottom end and 𝑚 trains are scheduled to depart from the left end. If two trains are both at (𝑥, 𝑦) at the same time for some 𝑥 and 𝑦, they will crash into each other. Therefore, he is asking you to find the minimum number of trains that should be cancelled to prevent all such crashes.

## Input

Each test contains one or more test cases. The first line contains the number of test cases 𝑡 (1 ≤ 𝑡 ≤ 100).

Each test case contains three lines. The first line of each test case consists of two integers 𝑛 and 𝑚 (1 ≤ 𝑛, 𝑚 ≤ 100) — the number of trains scheduled to depart from the bottom end, and the number of trains scheduled to depart from the left end, respectively.

The second line of each test case contains 𝑛 integers. Each integer is a train number that is scheduled to start from the bottom end. The numbers are given in strictly increasing order, and are between 1 and 100, inclusive.

The third line of each test case contains 𝑚 integers. Each integer is a train number that is scheduled to start from the left end. The numbers are given in strictly increasing order, and are between 1 and 100, inclusive.

## Output

For each test case, print a single integer: the minimum number of trains that should be canceled in order to prevent all crashes.

## Example

### Sample Input 1

    3
    1 2
    1
    3 4
    3 2
    1 3 4
    2 4
    9 14
    2 7 16 28 33 57 59 86 99
    3 9 14 19 25 26 28 35 41 59 85 87 99 100

### Sample Output 1

    0
    1
    3

## Note

In the first case, we can show that there will be no crashes if the current schedule is followed. Therefore, the answer is zero.

In the second case, at 𝑇 = 4, there will be a crash, as can be seen in the picture below. We can prove that after canceling one of these trains, the remaining trains will not crash. Therefore, the answer is one.
