# B. Atilla's Favorite Problem

Source : [Problem](https://codeforces.com/problemset/problem/1760/B)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

In order to write a string, Atilla needs to first learn all letters that are contained in the string.

Atilla needs to write a message which can be represented as a string s. He asks you what is the minimum alphabet size required so that one can write this message.

The alphabet of size x (1 ≤ x ≤ 26) contains only the first x Latin letters. For example an alphabet of size 4 contains only the characters a, b, c and d.

## Input

The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

The first line of each test case contains a single integer n (1 ≤ n ≤ 100) — the length of the string.

The second line of each test case contains a string s of length n, consisting of lowercase Latin letters.

## Output

For each test case, output a single integer — the minimum alphabet size required to so that Atilla can write his message s.

## Example

### Sample Input 1

    5
    1
    a
    4
    down
    10
    codeforces
    3
    bcf
    5
    zzzzz

### Sample Output 1

    1
    23
    19
    6
    26

## Note

For the first test case, Atilla needs to know only the character a, so the alphabet of size 1 which only contains a is enough.

For the second test case, Atilla needs to know the characters d, o, w, n. The smallest alphabet size that contains all of them is 23 (such alphabet can be represented as the string abcdefghijklmnopqrstuvw).
