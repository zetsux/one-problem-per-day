# A. Ian Visits Mary

Source : [Problem](https://codeforces.com/problemset/problem/1816/A)

-   time limit per test 1 second
-   memory limit per test 256 megabytes
-   input standard input
-   output standard output

Ian and Mary are frogs living on lattice points of the Cartesian coordinate plane, with Ian living on (0,0) and Mary living on (a,b)

Ian would like to visit Mary by jumping around the Cartesian coordinate plane. Every second, he jumps from his current position (xp,yp) to another lattice point (xq,yq), such that no lattice point other than (xp,yp) and (xq,yq) lies on the segment between point (xp,yp) and point (xq,yq)

As Ian wants to meet Mary as soon as possible, he wants to jump towards point (a,b) using at most 2 jumps. Unfortunately, Ian is not good at maths. Can you help him?

A lattice point is defined as a point with both the x-coordinate and y-coordinate being integers.

## Input

The first line contains a single integer t (1 ≤ t ≤ 500) — the number of test cases. The description of test cases follows.

The first and only line of each test case contains two integers a and b (1 ≤ a, b ≤ 109) — the coordinates of the lattice point where Mary lives.

## Output

For each test case, print an integer n (1 ≤ n ≤ 2) on the first line, denoting the number of jumps Ian uses in order to meet Mary. Note that you do not need to minimize the number of jumps.

On the i-th line of the next n lines, print two integers 0 ≤ xi, yi ≤ 109 separated by a space, denoting Ian's location (xi, yi) after the i-th jump. xn = a, yn = b must hold.

Ian's initial location and his locations after each of the n jumps need not be distinct.

If there are multiple solutions, output any.

## Example

### Input

    8
    3 4
    4 4
    3 6
    2 2
    1 1
    7 3
    2022 2023
    1000000000 1000000000

## Output

    1
    3 4
    2
    3 2
    4 4
    2
    5 3
    3 6
    2
    1 0
    2 2
    1
    1 1
    1
    7 3
    1
    2022 2023
    2
    69420420 469696969
    1000000000 1000000000

## Note

### In the first test case:

<img src="https://espresso.codeforces.com/0a4b539a785ed84ff303e0ea9a4e01d9b05d01a4.png"><br>
(0,0) → (3,4)

### In the second test case:

<img src="https://espresso.codeforces.com/04312929b14fcf0adc7b4523c3f930ef70009e20.png"><br>
(0,0) → (3,2) → (4,4)

### In the third test case:

<img src="https://espresso.codeforces.com/ec09ec0dff2493e1c62f42643ed926780315f46b.png"><br>
(0,0) → (5,3) → (3,6)
