# A. Flip Flop Sum

Source : [Problem](https://codeforces.com/problemset/problem/1778/A)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

You are given an array of n integers a1, a2, …, an. The integers are either 1 or −1. You have to perform the following operation exactly once on the array a :

- Choose an index i (1 ≤ i < n) and flip the signs of ai and ai + 1. Here, flipping the sign means −1
  will be 1 and 1 will be −1.

What is the maximum possible value of a1 + a2 + … + an after applying the above operation?

## Input

Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 500). Description of the test cases follows.

The first line of each test case contains a single integer n (2 ≤ n ≤ 10^5), the length of the array a.

The next line contains n integers a1, a2, …, an (ai = 1 or ai = −1).

The sum of n over all cases doesn't exceed 10^5.

## Output

For each test case, print the maximum possible sum of the array a
you can get in a separate line.

## Example

### Sample Input 1

    4
    5
    -1 1 1 -1 -1
    5
    1 1 -1 -1 -1
    2
    1 1
    4
    1 -1 -1 1

### Sample Output 1

    3
    3
    -2
    4

## Note

In the first case, we can choose index 4 and flip the signs of a4 and a5. After this operation, the sum will be −1 + 1 + 1 + 1 + 1 = 3. We can't make the sum larger than this.

In the third case, the only option is to choose the index 1.
