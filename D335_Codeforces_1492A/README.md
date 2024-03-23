# A. Three swimmers

Source : [Problem](https://codeforces.com/problemset/problem/1492/A)

- time limit per test 1 second
- memory limit per test 512 megabytes
- input standard input
- output standard output

Three swimmers decided to organize a party in the swimming pool! At noon, they started to swim from the left side of the pool.

It takes the first swimmer exactly 𝑎 minutes to swim across the entire pool and come back, exactly 𝑏 minutes for the second swimmer and 𝑐 minutes for the third. Hence, the first swimmer will be on the left side of the pool after 0, 𝑎, 2𝑎, 3𝑎, ... minutes after the start time, the second one will be at 0, 𝑏, 2𝑏, 3𝑏, ... minutes, and the third one will be on the left side of the pool after 0, 𝑐, 2𝑐, 3𝑐, ... minutes.

You came to the left side of the pool exactly 𝑝 minutes after they started swimming. Determine how long you have to wait before one of the swimmers arrives at the left side of the pool.

## Input

The first line of the input contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 1000) — the number of test cases. Next 𝑡 lines contains test case descriptions, one per line.

Each line contains four integers 𝑝, 𝑎, 𝑏 and 𝑐 (1 ≤ 𝑝, 𝑎, 𝑏, 𝑐 ≤ 10^18), time in minutes after the start, when you came to the pool and times in minutes it take the swimmers to cross the entire pool and come back.

## Output

For each test case, output one integer — how long you have to wait (in minutes) before one of the swimmers arrives at the left side of the pool.

## Example

### Sample Input 1

    4
    9 5 4 8
    2 6 10 9
    10 2 5 10
    10 9 9 9

### Sample Output 1

    1
    4
    0
    8

## Note

In the first test case, the first swimmer is on the left side in 0, 5, 10, 15, … minutes after the start time, the second swimmer is on the left side in 0, 4, 8, 12, … minutes after the start time, and the third swimmer is on the left side in 0, 8, 16, 24, … minutes after the start time. You arrived at the pool in 9 minutes after the start time and in a minute you will meet the first swimmer on the left side.

In the second test case, the first swimmer is on the left side in 0, 6, 12, 18, … minutes after the start time, the second swimmer is on the left side in 0, 10, 20, 30, … minutes after the start time, and the third swimmer is on the left side in 0, 9, 18, 27, … minutes after the start time. You arrived at the pool 2 minutes after the start time and after 4 minutes meet the first swimmer on the left side.

In the third test case, you came to the pool 10 minutes after the start time. At the same time, all three swimmers are on the left side. A rare stroke of luck!

In the fourth test case, all swimmers are located on the left side in 0, 9, 18, 27, … minutes after the start time. You arrived at the pool 10 minutes after the start time and after 8 minutes meet all three swimmers on the left side.
