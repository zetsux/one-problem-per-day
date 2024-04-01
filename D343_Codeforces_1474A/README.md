# A. Puzzle From the Future

Source : [Problem](https://codeforces.com/problemset/problem/1474/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

In the 2022 year, Mike found two binary integers 𝑎 and 𝑏 of length 𝑛 (both of them are written only by digits 0 and 1) that can have leading zeroes. In order not to forget them, he wanted to construct integer 𝑑 in the following way:

- he creates an integer 𝑐 as a result of bitwise summing of 𝑎 and 𝑏 without transferring carry, so 𝑐 may have one or more 2-s. For example, the result of bitwise summing of 0110 and 1101 is 1211 or the sum of 011000 and 011000 is 022000;
- after that Mike replaces equal consecutive digits in 𝑐 by one digit, thus getting 𝑑. In the cases above after this operation, 1211 becomes 121 and 022000 becomes 020 (so, 𝑑 won't have equal consecutive digits).

Unfortunately, Mike lost integer 𝑎 before he could calculate 𝑑 himself. Now, to cheer him up, you want to find any binary integer 𝑎 of length 𝑛 such that 𝑑 will be maximum possible as integer.

Maximum possible as integer means that 102 > 21, 012 < 101, 021 = 21 and so on.

## Input

The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 1000) — the number of test cases.

The first line of each test case contains the integer 𝑛 (1 ≤ 𝑛 ≤ 10^5) — the length of 𝑎 and 𝑏.

The second line of each test case contains binary integer 𝑏 of length 𝑛. The integer 𝑏 consists only of digits 0 and 1.

It is guaranteed that the total sum of 𝑛 over all 𝑡 test cases doesn't exceed 10^5.

## Output

For each test case output one binary integer 𝑎 of length 𝑛. Note, that 𝑎 or 𝑏 may have leading zeroes but must have the same length 𝑛.

## Example

### Sample Input 1

    5
    1
    0
    3
    011
    3
    110
    6
    111000
    6
    001011

### Sample Output 1

    1
    110
    100
    101101
    101110

## Note

In the first test case, 𝑏 = 0 and choosing 𝑎 = 1 gives 𝑑 = 1 as a result.

In the second test case, 𝑏 = 011 so:

- if you choose 𝑎 = 000, 𝑐 will be equal to 011, so 𝑑 = 01;
- if you choose 𝑎 = 111, 𝑐 will be equal to 122, so 𝑑 = 12;
- if you choose 𝑎 = 010, you'll get 𝑑 = 021.
- If you select 𝑎 = 110, you'll get 𝑑 = 121.

We can show that answer 𝑎 = 110 is optimal and 𝑑 = 121 is maximum possible.
In the third test case, 𝑏 = 110. If you choose 𝑎 = 100, you'll get 𝑑 = 210 and it's the maximum possible 𝑑.

In the fourth test case, 𝑏 = 111000. If you choose 𝑎 = 101101, you'll get 𝑑 = 212101 and it's maximum possible 𝑑.

In the fifth test case, 𝑏 = 001011. If you choose 𝑎 = 101110, you'll get 𝑑 = 102121 and it's maximum possible 𝑑.
