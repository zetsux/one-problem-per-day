# A. Reconnaissance 2

Source : [Problem](https://codeforces.com/problemset/problem/34/A)

- time limit per test 2 seconds
- memory limit per test256 megabytes
- input standard input
- output standard output

n soldiers stand in a circle. For each soldier his height ai is known. A reconnaissance unit can be made of such two neighbouring soldiers, whose heights difference is minimal, i.e. |ai - aj| is minimal. So each of them will be less noticeable with the other. Output any pair of soldiers that can form a reconnaissance unit.

## Input

The first line contains integer n (2 ≤ n ≤ 100) — amount of soldiers. Then follow the heights of the soldiers in their order in the circle — n space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 1000). The soldier heights are given in clockwise or counterclockwise direction.

## Output

Output two integers — indexes of neighbouring soldiers, who should form a reconnaissance unit. If there are many optimum solutions, output any of them. Remember, that the soldiers stand in a circle.

## Examples

### Sample Input 1

    5
    10 12 13 15 10

### Sample Output 1

    5 1

### Sample Input 2

    4
    10 20 30 40

### Sample Output 2

    1 2
