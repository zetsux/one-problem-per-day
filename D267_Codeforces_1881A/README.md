# A. Don't Try to Count

Source : [Problem](https://codeforces.com/problemset/problem/1881/A)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

Given a string x of length n and a string s of length m (n ⋅ m ≤ 25), consisting of lowercase Latin letters, you can apply any number of operations to the string x.

In one operation, you append the current value of x to the end of the string x. Note that the value of x will change after this.

For example, if x = "aba", then after applying operations, x will change as follows: "aba" → "abaaba" → "abaabaabaaba".

After what minimum number of operations s will appear in x as a substring? A substring of a string is defined as a contiguous segment of it.

## Input

The first line of the input contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

The first line of each test case contains two numbers n and m (1 ≤ n ⋅ m ≤ 25) — the lengths of strings x
and s, respectively.

The second line of each test case contains the string x of length n.

The third line of each test case contains the string s of length m.

## Output

For each test case, output a single number — the minimum number of operations after which s will appear in x
as a substring. If this is not possible, output −1.

## Example

### Sample Input 1

    12
    1 5
    a
    aaaaa
    5 5
    eforc
    force
    2 5
    ab
    ababa
    3 5
    aba
    ababa
    4 3
    babb
    bbb
    5 1
    aaaaa
    a
    4 2
    aabb
    ba
    2 8
    bk
    kbkbkbkb
    12 2
    fjdgmujlcont
    tf
    2 2
    aa
    aa
    3 5
    abb
    babba
    1 19
    m
    mmmmmmmmmmmmmmmmmmm

### Sample Output 1

    3
    1
    2
    -1
    1
    0
    1
    3
    1
    0
    2
    5

## Note

In the first test case of the example, after 2 operations, the string will become "aaaa", and after 3
operations, it will become "aaaaaaaa", so the answer is 3.

In the second test case of the example, after applying 1 operation, the string will become "eforceforc", where the substring is highlighted in red.

In the fourth test case of the example, it can be shown that it is impossible to obtain the desired string as a substring.
