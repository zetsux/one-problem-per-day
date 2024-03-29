# A. Bovine Dilemma

Source : [Problem](https://codeforces.com/problemset/problem/1466/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Argus was charged with guarding Io, which is not an ordinary cow. Io is quite an explorer, and she wanders off rather frequently, making Argus' life stressful. So the cowherd decided to construct an enclosed pasture for Io.

There are 𝑛 trees growing along the river, where Argus tends Io. For this problem, the river can be viewed as the 𝑂𝑋 axis of the Cartesian coordinate system, and the 𝑛 trees as points with the 𝑦-coordinate equal 0. There is also another tree growing in the point (0,1).

Argus will tie a rope around three of the trees, creating a triangular pasture. Its exact shape doesn't matter to Io, but its area is crucial to her. There may be many ways for Argus to arrange the fence, but only the ones which result in different areas of the pasture are interesting for Io. Calculate the number of different areas that her pasture may have. Note that the pasture must have nonzero area.

## Input

The input consists of multiple test cases. The first line contains an integer 𝑡 (1 ≤ 𝑡 ≤ 100) — the number of test cases. Then 𝑡 test cases follow, each one is described in two lines.

In the first line of each test case there is a single integer 𝑛 (1 ≤ 𝑛 ≤ 50) denoting the number of trees growing along the river. Next line contains 𝑛 distinct integers 𝑥1<𝑥2<…<𝑥𝑛−1<𝑥𝑛 (1 ≤ 𝑥𝑖 ≤ 50), the 𝑥-coordinates of trees growing along the river.

## Output

In a single line output an integer, the number of different nonzero areas that triangles with trees as vertices may have.

## Example

### Sample Input 1

    8
    4
    1 2 4 5
    3
    1 3 5
    3
    2 6 8
    2
    1 2
    1
    50
    5
    3 4 5 6 8
    3
    1 25 26
    6
    1 2 4 8 16 32

### Sample Output 1

    4
    2
    3
    1
    0
    5
    3
    15

## Note

In the first test case, we have 6 non-degenerate triangles with the following areas: 0.5, 0.5, 1, 1.5, 1.5 and 2. The pasture can have 4 different areas, and thus 4 is the answer.

In the second test case, we have 3 non-degenerate triangles with the following areas: 1, 1 and 2. The pasture can have 2 different areas, so 2 is the answer.

The following two drawings present the situation in the second test case. The blue triangles in the first drawing have area 1. The red triangle in the second drawing has area 2.

<p align="center"><img src="https://espresso.codeforces.com/2d88809fbea392e374bb8759cc2eb53b4f44e010.png"></p>
