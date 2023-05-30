# A. Anton and Letters

Source : [Problem](https://codeforces.com/problemset/problem/443/A)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

Recently, Anton has found a set. The set consists of small English letters. Anton carefully wrote out all the letters from the set in one line, separated by a comma. He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

Unfortunately, from time to time Anton would forget writing some letter and write it again. He asks you to count the total number of distinct letters in his set.

## Input

The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved bracket. Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

## Output

Print a single number — the number of distinct letters in Anton's set.

## Examples

### Sample Input 1

    {a, b, c}

### Sample Output 1

    3

### Sample Input 2

    {b, a, b, a}

### Sample Output 2

    2

### Sample Input 3

    {}

### Sample Output 3

    0
