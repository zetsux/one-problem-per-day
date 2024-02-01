# A. Diverse Team

Source : [Problem](https://codeforces.com/problemset/problem/988/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

There are n students in a school class, the rating of the i-th student on Codehorses is ai. You have to form a team consisting of k students (1 ≤ k ≤ n) such that the ratings of all team members are distinct.

If it is impossible to form a suitable team, print "NO" (without quotes). Otherwise print "YES", and then print k distinct numbers which should be the indices of students in the team you form. If there are multiple answers, print any of them.

## Input

The first line contains two integers n and k (1 ≤ k ≤ n ≤ 100) — the number of students and the size of the team you have to form.

The second line contains n integers a1, a2, …, an (1 ≤ ai ≤ 100), where ai is the rating of i-th student.

## Output

If it is impossible to form a suitable team, print "NO" (without quotes). Otherwise print "YES", and then print k distinct integers from 1 to n which should be the indices of students in the team you form. All the ratings of the students in the team should be distinct. You may print the indices in any order. If there are multiple answers, print any of them.

Assume that the students are numbered from 1 to n.

## Examples

### Sample Input 1

    5 3
    15 13 15 15 12

### Sample Output 1

    YES
    1 2 5

### Sample Input 1

    5 4
    15 13 15 15 12

### Sample Output 1

    NO

### Sample Input 1

    4 4
    20 10 40 30

### Sample Output 1

    YES
    1 2 3 4

## Note

All possible answers for the first example:

{1 2 5}<br>
{2 3 5}<br>
{2 4 5}

Note that the order does not matter.
