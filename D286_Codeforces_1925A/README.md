# A. We Got Everything Covered!

Source : [Problem](https://codeforces.com/problemset/problem/1925/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given two positive integers n and k.

Your task is to find a string s such that all possible strings of length n that can be formed using the first k lowercase English alphabets occur as a subsequence of s.

If there are multiple answers, print the one with the smallest length. If there are still multiple answers, you may print any of them.

Note: A string a is called a subsequence of another string b if a can be obtained by deleting some (possibly zero) characters from b without changing the order of the remaining characters.

## Input

The first line of input contains a single integer t (1 ≤ t ≤ 676) denoting the number of test cases.

Each test case consists of a single line of input containing two integers n (1 ≤ n ≤ 26) and k (1 ≤ k ≤ 26).

## Output

For each test case, print a single line containing a single string s which satisfies the above property. If there are multiple answers, print the one with the smallest length. If there are still multiple answers, you may print any of them.

## Example

### Sample Input 1

    4
    1 2
    2 1
    2 2
    2 3

### Sample Output 1

    ab
    aa
    baab
    abcbac

## Note

For the first test case, there are two strings of length 1 which can be formed using the first 2 lowercase English alphabets, and they are present in s as a subsequence as follows:

- a:ab
- b:ab

For the second test case, there is only one string of length 2 which can be formed using the first lowercase English alphabet, and it is present in s as a subsequence as follows:

- aa:aa

For the third test case, there are 4 strings of length 2 which can be formed using the first 2 lowercase English alphabets, and they are present in s as a subsequence as follows:

- aa:baab
- ab:baab
- ba:baab
- bb:baab

For the fourth test case, there are 9 strings of length 2 which can be formed using the first 3 lowercase English alphabets, and they are present in s as a subsequence as follows:

- aa:abcbac
- ab:abcbac
- ac:abcbac
- ba:abcbac
- bb:abcbac
- bc:abcbac
- ca:abcbac
- cb:abcbac
- cc:abcbac
