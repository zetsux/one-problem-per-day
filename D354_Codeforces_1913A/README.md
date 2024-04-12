# A. Rating Increase

Source : [Problem](https://codeforces.com/problemset/problem/1913/A)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

Monocarp is a great solver of adhoc problems. Recently, he participated in an Educational Codeforces Round, and gained rating!

Monocarp knew that, before the round, his rating was 𝑎. After the round, it increased to 𝑏 (𝑏>𝑎). He wrote both values one after another to not forget them.

However, he wrote them so close to each other, that he can't tell now where the first value ends and the second value starts.

Please, help him find some values 𝑎 and 𝑏 such that:

- neither of them has a leading zero;
- both of them are strictly greater than 0;
- 𝑏>𝑎;
- they produce the given value 𝑎𝑏 when written one after another.

If there are multiple answers, you can print any of them.

## Input

The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 10^4) — the number of testcases.

The only line of each testcase consists of a single string 𝑎𝑏 of length from 2 to 8 that:

- consists only of digits;
- doesn't start with a zero.

## Output

For each testcase, determine if such values 𝑎 and 𝑏 exist. If they don't, print -1. Otherwise, print two integers 𝑎 and 𝑏.

If there are multiple answers, you can print any of them.

## Example

### Sample Input 1

    5
    20002001
    391125
    200200
    2001000
    12

### Sample Output 1

    2000 2001
    39 1125
    -1
    200 1000
    1 2

## Note

In the second testcase, printing 3 and 91125 is also valid.

In the third testcase, 20 and 0200 is not valid, because 𝑏 has a leading zero. 200 and 200 is not valid, because 200 is not strictly greater than 200.
