# A. Creep

Source : [Problem](https://codeforces.com/problemset/problem/1694/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Define the score of some binary string 𝑇 as the absolute difference between the number of zeroes and ones in it. (for example, 𝑇 = 010001 contains 4 zeroes and 2 ones, so the score of 𝑇 is |4 − 2| = 2).

Define the creepiness of some binary string 𝑆 as the maximum score among all of its prefixes (for example, the creepiness of 𝑆 = 01001 is equal to 2 because the score of the prefix 𝑆[1…4] is 2 and the rest of the prefixes have a score of 2 or less).

Given two integers 𝑎 and 𝑏, construct a binary string consisting of 𝑎 zeroes and 𝑏 ones with the minimum possible creepiness.

## Input

The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 1000) — the number of test cases. The description of the test cases follows.

The only line of each test case contains two integers 𝑎 and 𝑏 (1 ≤ 𝑎, 𝑏 ≤ 100) — the numbers of zeroes and ones correspondingly.

## Output

For each test case, print a binary string consisting of 𝑎 zeroes and 𝑏 ones with the minimum possible creepiness. If there are multiple answers, print any of them.

## Example

### Sample Input 1

    5
    1 1
    1 2
    5 2
    4 5
    3 7

### Sample Output 1

    10
    011
    0011000
    101010101
    0001111111

## Note

In the first test case, the score of 𝑆[1…1] is 1, and the score of 𝑆[1…2] is 0.

In the second test case, the minimum possible creepiness is 1 and one of the other answers is 101.

In the third test case, the minimum possible creepiness is 3 and one of the other answers is 0001100.
