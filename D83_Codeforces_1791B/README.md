# B. Following Directions

Source : [Problem](https://codeforces.com/problemset/problem/1791/B)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Alperen is standing at the point (0,0). He is given a string s of length n and performs n moves. The i-th move is as follows:

- if si=L, then move one unit left;
- if si=R, then move one unit right;
- if si=U, then move one unit up;
- if si=D , then move one unit down.

<p align="center"><img src="https://espresso.codeforces.com/b14adb9d815211c9aefa0f8e074780a1eab5a71b.png"></p>

If Alperen starts at the center point, he can make the four moves shown.

There is a candy at (1,1) (that is, one unit above and one unit to the right of Alperen's starting point). You need to determine if Alperen ever passes the candy.

<p align="center"><img src="https://espresso.codeforces.com/e6cdd3512b6505c4d7bb872c7708d10a67d2d745.png"></p>

Alperen's path in the first test case.

## Input

The first line of the input contains an integer t (1 ≤ t ≤ 1000) — the number of testcases.

The first line of each test case contains an integer n (1 ≤ n ≤ 50) — the length of the string.

The second line of each test case contains a string s of length n consisting of characters L, R, D, and U, denoting the moves Alperen makes.

## Output

For each test case, output "YES" (without quotes) if Alperen passes the candy, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

## Example

### Sample Input 1

    7
    7
    UUURDDL
    2
    UR
    8
    RRRUUDDD
    3
    LLL
    4
    DUUR
    5
    RUDLL
    11
    LLLLDDRUDRD

### Sample Output 1

    YES
    YES
    NO
    NO
    YES
    YES
    NO

## Note

In the first test case, Alperen follows the path (0,0) → (0,1) → (0,2) → (0,3) → (1,3) → (1,2) → (1,1) → (0,1).

Note that Alperen doesn't need to end at the candy's location of (1,1), he just needs to pass it at some point.

In the second test case, Alperen follows the path (0,0) → (0,1) → (1,1).

In the third test case, Alperen follows the path (0,0) → (1,0) → (2,0) → (3,0) → (3,1) → (3,2) → (3,1) → (3,0) → (3,−1).

In the fourth test case, Alperen follows the path (0,0) → (−1,0) → (−2,0) → (−3,0).
