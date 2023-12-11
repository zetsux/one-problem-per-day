# C. Vlad Building Beautiful Array

Source : [Problem](https://codeforces.com/problemset/problem/1833/C)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Vlad was given an array a of n positive integers. Now he wants to build a beautiful array b of length n from it.

Vlad considers an array beautiful if all the numbers in it are positive and have the same parity. That is, all numbers in the beautiful array are greater than zero and are either all even or all odd.

To build the array b, Vlad can assign each bi
either the value ai
or ai − aj, where any j
from 1 to n can be chosen.

To avoid trying to do the impossible, Vlad asks you to determine whether it is possible to build a beautiful array b
of length n
using his array a.

## Input

The first line of input contains an integer t (1 ≤ t ≤ 10^4) — the number of test cases.

Then follow the descriptions of the test cases.

The first line of each case contains a single integer n (1 ≤ n ≤ 2 ⋅ 10^5) — the length of the array a.

The second line of each case contains n
positive integers a1, a2, …, an (1 ≤ ai ≤ 10^9) — the elements of the array a.

It is guaranteed that the sum of n
over all cases does not exceed 2 ⋅ 10^5.

## Output

Output t strings, each of which is the answer to the corresponding test case. As the answer, output "YES" if Vlad can build a beautiful array b, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

## Example

### Sample Input 1

    7
    5
    2 6 8 4 3
    5
    1 4 7 6 9
    4
    2 6 4 10
    7
    5 29 13 9 10000001 11 3
    5
    2 1 2 4 2
    5
    2 4 5 4 3
    4
    2 5 5 4

### Sample Output 1

    NO
    YES
    YES
    YES
    YES
    NO
    NO
