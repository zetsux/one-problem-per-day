# A. Escalator Conversations

Source : [Problem](https://codeforces.com/problemset/problem/1851/A)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

One day, Vlad became curious about who he can have a conversation with on the escalator in the subway. There are a total of n passengers. The escalator has a total of m steps, all steps indexed from 1 to m and i-th step has height i ⋅ k.

Vlad's height is H centimeters. Two people with heights a and b can have a conversation on the escalator if they are standing on different steps and the height difference between them is equal to the height difference between the steps.

For example, if two people have heights 170
and 180 centimeters, and m = 10, k = 5, then they can stand on steps numbered 7 and 5, where the height difference between the steps is equal to the height difference between the two people: k ⋅ 2 = 5 ⋅ 2 = 10 = 180 − 170. There are other possible ways.

Given an array h of size n, where hi
represents the height of the i-th person. Vlad is interested in how many people he can have a conversation with on the escalator individually.

For example, if n = 5, m = 3, k = 3, H = 11, and h=[5, 4, 14, 18, 2], Vlad can have a conversation with the person with height 5
(Vlad will stand on step 1, and the other person will stand on step 3) and with the person with height 14
(for example, Vlad can stand on step 3, and the other person will stand on step 2
). Vlad cannot have a conversation with the person with height 2
because even if they stand on the extreme steps of the escalator, the height difference between them will be 6, while their height difference is 9. Vlad cannot have a conversation with the rest of the people on the escalator, so the answer for this example is 2.

## Input

The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

Then the descriptions of the test cases follow.

The first line of each test case contains integers: n,m,k,H
(1 ≤ n, m ≤ 50, 1 ≤ k, H ≤ 10^6). Here, n is the number of people, m is the number of steps, k is the height difference between neighboring steps, and H is Vlad's height.

The second line contains n integers: h1, h2, …, hn (1 ≤ hi ≤ 10^6). Here, hi represents the height of the i-th person.

## Output

For each test case, output a single integer — the number of people Vlad can have a conversation with on the escalator individually.

## Example

### Sample Input 1

    7
    5 3 3 11
    5 4 14 18 2
    2 9 5 6
    11 9
    10 50 3 11
    43 44 74 98 62 60 99 4 11 73
    4 8 8 49
    68 58 82 73
    7 1 4 66
    18 66 39 83 48 99 79
    9 1 1 13
    26 23 84 6 60 87 40 41 25
    6 13 3 28
    30 70 85 13 1 55

### Sample Output 1

    2
    1
    4
    1
    0
    0
    3

## Note

The first example is explained in the problem statement.

In the second example, Vlad can have a conversation with the person with height 11.

In the third example, Vlad can have a conversation with people with heights: 44, 74, 98, 62. Therefore, the answer is 4.

In the fourth example, Vlad can have a conversation with the person with height 73.
