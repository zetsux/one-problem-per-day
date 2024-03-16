# B. Vlad and Shapes

Source : [Problem](https://codeforces.com/problemset/problem/1926/B)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Vladislav has a binary square grid of 𝑛×𝑛 cells. A triangle or a square is drawn on the grid with symbols 𝟷. As he is too busy being cool, he asks you to tell him which shape is drawn on the grid.

- A triangle is a shape consisting of 𝑘 (𝑘>1) consecutive rows, where the 𝑖-th row has 2⋅𝑖−1 consecutive characters 𝟷, and the central 1s are located in one column. An upside down triangle is also considered a valid triangle (but not rotated by 90 degrees).

<p align="center"><img src="https://espresso.codeforces.com/db242fa9b991f493bbca9ab6358c4e076e7cbbf8.png"><br>Two left pictures contain examples of triangles: 𝑘=4, 𝑘=3. The two right pictures don't contain triangles.</p>

- A square is a shape consisting of 𝑘 (𝑘>1) consecutive rows, where the 𝑖-th row has 𝑘 consecutive characters 𝟷, which are positioned at an equal distance from the left edge of the grid.

<p align="center"><img src="https://espresso.codeforces.com/c91a4bbd6d4165c4b64471361fe556bda28b2d94.png"><br>Examples of two squares: 𝑘=2, 𝑘=4.</p>

For the given grid, determine the type of shape that is drawn on it.

## Input

The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 100) — the number of test cases.

The first line of each test case contains a single integer 𝑛 (2 ≤ 𝑛 ≤ 10) — the size of the grid.

The next 𝑛 lines each contain 𝑛 characters 𝟶 or 𝟷.

The grid contains exactly one triangle or exactly one square that contains all the 𝟷s in the grid. It is guaranteed that the size of the triangle or square is greater than 1 (i.e., the shape cannot consist of exactly one 1).

## Output

For each test case, output "SQUARE" if all the 𝟷s in the grid form a square, and "TRIANGLE" otherwise (without quotes).

## Example

### Sample Input 1

    6
    3
    000
    011
    011
    4
    0000
    0000
    0100
    1110
    2
    11
    11
    5
    00111
    00010
    00000
    00000
    00000
    10
    0000000000
    0000000000
    0000000000
    0000000000
    0000000000
    1111111110
    0111111100
    0011111000
    0001110000
    0000100000
    3
    111
    111
    111

### Sample Output 1

    SQUARE
    TRIANGLE
    SQUARE
    TRIANGLE
    TRIANGLE
    SQUARE
