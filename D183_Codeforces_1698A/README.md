# A. XOR Mixup

Source : [Problem](https://codeforces.com/problemset/problem/1698/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

There is an array a with n−1 integers. Let x
be the bitwise XOR of all elements of the array. The number x
is added to the end of the array a (now it has length n
), and then the elements are shuffled.

You are given the newly formed array a. What is x? If there are multiple possible values of x, you can output any of them.

## Input

The input consists of multiple test cases. The first line contains an integer t (1 ≤ t ≤ 1000) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n (2 ≤ n ≤ 100) — the number of integers in the resulting array a.

The second line of each test case contains n
integers a1, a2, …, an (0 ≤ ai ≤ 127) — the elements of the newly formed array a.

Additional constraint on the input: the array a is made by the process described in the statement; that is, some value of x
exists.

## Output

For each test case, output a single integer — the value of x, as described in the statement. If there are multiple possible values of x, output any of them.

## Example

### Sample Input 1

    4
    4
    4 3 2 5
    5
    6 1 10 7 10
    6
    6 6 6 6 6 6
    3
    100 100 0

### Sample Output 1

    3
    7
    6
    0

## Note

In the first test case, one possible array a
is a=[2,5,4]. Then x = 2 ⊕ 5 ⊕ 4 = 3 (⊕ denotes the bitwise XOR), so the new array is [2,5,4,3]. Afterwards, the array is shuffled to form [4,3,2,5].

In the second test case, one possible array a
is a=[1,10,6,10]. Then x = 1 ⊕ 10 ⊕ 6 ⊕ 10 = 7, so the new array is [1,10,6,10,7]. Afterwards, the array is shuffled to form [6,1,10,7,10].

In the third test case, all elements of the array are equal to 6, so x=6.

In the fourth test case, one possible array a
is a=[100,100]. Then x = 100 ⊕ 100 = 0, so the new array is [100,100,0]. Afterwards, the array is shuffled to form [100,100,0]. (Note that after the shuffle, the array can remain the same.)
