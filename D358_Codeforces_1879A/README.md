# A. Rigged!

Source : [Problem](https://codeforces.com/problemset/problem/1879/A)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

Monocarp organizes a weightlifting competition. There are 𝑛 athletes participating in the competition, the 𝑖-th athlete has strength 𝑠𝑖 and endurance 𝑒𝑖. The 1-st athlete is Monocarp's friend Polycarp, and Monocarp really wants Polycarp to win.

The competition will be conducted as follows. The jury will choose a positive (greater than zero) integer 𝑤, which denotes the weight of the barbell that will be used in the competition. The goal for each athlete is to lift the barbell as many times as possible. The athlete who lifts the barbell the most amount of times will be declared the winner (if there are multiple such athletes — there's no winner).

If the barbell's weight 𝑤 is strictly greater than the strength of the 𝑖-th athlete 𝑠𝑖, then the 𝑖-th athlete will be unable to lift the barbell even one single time. Otherwise, the 𝑖-th athlete will be able to lift the barbell, and the number of times he does it will be equal to his endurance 𝑒𝑖.

For example, suppose there are 4 athletes with parameters 𝑠1=7,𝑒1=4; 𝑠2=9,𝑒2=3; 𝑠3=4,𝑒3=6; 𝑠4=2,𝑒4=2. If the weight of the barbell is 5, then:

- the first athlete will be able to lift the barbell 4 times;
- the second athlete will be able to lift the barbell 3 times;
- the third athlete will be unable to lift the barbell;
- the fourth athlete will be unable to lift the barbell.

Monocarp wants to choose 𝑤 in such a way that Polycarp (the 1-st athlete) wins the competition. Help him to choose the value of 𝑤, or report that it is impossible.

## Input

The first line contains one integer 𝑡 (1 ≤ 𝑡 ≤ 100) — the number of test cases.

The first line of each test case contains one integer 𝑛 (2 ≤ 𝑛 ≤ 100) — the number of athletes. Then 𝑛 lines follow, the 𝑖-th of them contains two integers 𝑠𝑖 and 𝑒𝑖 (1 ≤ 𝑠𝑖 ≤ 10^9; 1 ≤ 𝑒𝑖 ≤ 100) — the strength and the endurance of the 𝑖-th athlete.

## Output

For each test case, print the answer as follows:

if the answer exists, print one integer — the value of 𝑤 meeting the constraints. The integer you print should satisfy 1 ≤ 𝑤 ≤ 10^9. It can be shown that if the answer exists, at least one such value of 𝑤 exists as well. If there are multiple answers, you can print any of them;
otherwise, print one integer −1.

## Example

### Sample Input 1

    3
    4
    7 4
    9 3
    4 6
    2 2
    2
    4 6
    100 100
    2
    1337 3
    1337 3

### Sample Output 1

    5
    -1
    -1

## Note

The first test case of the example is described in the statement.
