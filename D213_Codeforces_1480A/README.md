# A. Yet Another String Game

Source : [Problem](https://codeforces.com/problemset/problem/1480/A)

- time limit per test 2 seconds
- memory limit per test 512 megabytes
- input standard input
- output standard output

Homer has two friends Alice and Bob. Both of them are string fans.

One day, Alice and Bob decide to play a game on a string s=s1s2…sn
of length n
consisting of lowercase English letters. They move in turns alternatively and Alice makes the first move.

In a move, a player must choose an index i (1 ≤ i ≤ n) that has not been chosen before, and change si
to any other lowercase English letter c that c≠si.

When all indices have been chosen, the game ends.

The goal of Alice is to make the final string lexicographically as small as possible, while the goal of Bob is to make the final string lexicographically as large as possible. Both of them are game experts, so they always play games optimally. Homer is not a game expert, so he wonders what the final string will be.

A string a is lexicographically smaller than a string b
if and only if one of the following holds:

- a is a prefix of b, but a≠b;
- in the first position where a and b differ, the string a has a letter that appears earlier in the alphabet than the corresponding letter in b.

## Input

Each test contains multiple test cases. The first line contains t (1 ≤ t ≤ 1000) — the number of test cases. Description of the test cases follows.

The only line of each test case contains a single string s (1 ≤ |s| ≤ 50) consisting of lowercase English letters.

## Output

For each test case, print the final string in a single line.

## Example

### Sample Input 1

    3
    a
    bbbb
    az

### Sample Output 1

    b
    azaz
    by

## Note

In the first test case: Alice makes the first move and must change the only letter to a different one, so she changes it to 'b'.

In the second test case: Alice changes the first letter to 'a', then Bob changes the second letter to 'z', Alice changes the third letter to 'a' and then Bob changes the fourth letter to 'z'.

In the third test case: Alice changes the first letter to 'b', and then Bob changes the second letter to 'y'.
