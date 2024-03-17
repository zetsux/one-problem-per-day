# A. Entertainment in MAC

Source : [Problem](https://codeforces.com/problemset/problem/1935/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Congratulations, you have been accepted to the Master's Assistance Center! However, you were extremely bored in class and got tired of doing nothing, so you came up with a game for yourself.

You are given a string 𝑠 and an even integer 𝑛. There are two types of operations that you can apply to it:

1. Add the reversed string 𝑠 to the end of the string 𝑠 (for example, if 𝑠 = cpm, then after applying the operation 𝑠 = cpmmpc).
2. Reverse the current string 𝑠 (for example, if 𝑠= cpm, then after applying the operation 𝑠= mpc).

It is required to determine the lexicographically smallest† string that can be obtained after applying exactly 𝑛 operations. Note that you can apply operations of different types in any order, but you must apply exactly 𝑛 operations in total.

†A string 𝑎 is lexicographically smaller than a string 𝑏 if and only if one of the following holds:

- 𝑎 is a prefix of 𝑏, but 𝑎≠𝑏;
- in the first position where 𝑎 and 𝑏 differ, the string 𝑎 has a letter that appears earlier in the alphabet than the corresponding letter in 𝑏.

## Input

Each test consists of multiple test cases. The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 500) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single even integer 𝑛 (2 ≤ 𝑛 ≤ 10^9) — the number of operations applied to the string 𝑠.

The second line of each test case contains a single string 𝑠 (1 ≤ |𝑠| ≤ 100), consisting of lowercase English letters, — the string to which the operations are applied.

## Output

For each test case, output a single line — the lexicographically smallest string that can be obtained after applying exactly 𝑛 operations.

## Example

### Sample Input 1

    5
    4
    cpm
    2
    grib
    10
    kupitimilablodarbuz
    1000000000
    capybara
    6
    abacaba

### Sample Output 1

    cpm
    birggrib
    kupitimilablodarbuz
    arabypaccapybara
    abacaba

## Note

In the first test case, you can apply the operation of the second type (i.e., reverse the string 𝑠) 4 times. Then the string 𝑠 will remain equal to cpm.

In the second test case, you can do the following:

- Apply the operation of the second type, after which 𝑠 will become equal to birg.
- Apply operation of the first type (i.e., add the reversed string 𝑠 to the end of the string 𝑠), after which 𝑠 will become equal to birggrib.
