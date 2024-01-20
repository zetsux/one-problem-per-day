# A. Love Triangle

Source : [Problem](https://codeforces.com/problemset/problem/939/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

As you could know there are no male planes nor female planes. However, each plane on Earth likes some other plane. There are n planes on Earth, numbered from 1 to n, and the plane with number i likes the plane with number fi, where 1 ≤ fi ≤ n and fi ≠ i.

We call a love triangle a situation in which plane A likes plane B, plane B likes plane C and plane C likes plane A. Find out if there is any love triangle on Earth.

## Input

The first line contains a single integer n (2 ≤ n ≤ 5000) — the number of planes.

The second line contains n integers f1, f2, ..., fn (1 ≤ fi ≤ n, fi ≠ i), meaning that the i-th plane likes the fi-th.

## Output

Output «YES» if there is a love triangle consisting of planes on Earth. Otherwise, output «NO».

You can output any letter in lower case or in upper case.

## Examples

### Sample Input 1

    5
    2 4 5 1 3

### Sample Output 1

    YES

### Sample Input 2

    5
    5 5 5 5 1

### Sample Output 2

    NO

## Note

In first example plane 2 likes plane 4, plane 4 likes plane 1, plane 1 likes plane 2 and that is a love triangle.

In second example there are no love triangles.
