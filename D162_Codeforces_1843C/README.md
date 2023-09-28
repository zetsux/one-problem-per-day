# C. Sum in Binary Tree

Source : [Problem](https://codeforces.com/problemset/problem/1843/C)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Vanya really likes math. One day when he was solving another math problem, he came up with an interesting tree. This tree is built as follows.

Initially, the tree has only one vertex with the number 1
— the root of the tree. Then, Vanya adds two children to it, assigning them consecutive numbers — 2
and 3, respectively. After that, he will add children to the vertices in increasing order of their numbers, starting from 2, assigning their children the minimum unused indices. As a result, Vanya will have an infinite tree with the root in the vertex 1, where each vertex will have exactly two children, and the vertex numbers will be arranged sequentially by layers.

<p align="center"><img src="https://espresso.codeforces.com/3fe851b2505ce276dabd4a63ad7472346f98f9a8.png"></p>

Part of Vanya's tree.
Vanya wondered what the sum of the vertex numbers on the path from the vertex with number 1
to the vertex with number n
in such a tree is equal to. Since Vanya doesn't like counting, he asked you to help him find this sum.

## Input

The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

This is followed by t
lines — the description of the test cases. Each line contains one integer n (1 ≤ n ≤ 10^16) — the number of vertex for which Vanya wants to count the sum of vertex numbers on the path from the root to that vertex.

## Output

For each test case, print one integer — the desired sum.

## Example

### Sample Input 1

    6
    3
    10
    37
    1
    10000000000000000
    15

### Sample Output 1

    4
    18
    71
    1
    19999999999999980
    26

## Note

In the first test case of example on the path from the root to the vertex 3 there are two vertices 1 and 3, their sum equals 4.

In the second test case of example on the path from the root to the vertex with number 10
there are vertices 1, 2, 5, 10, sum of their numbers equals 1+2+5+10=18.
