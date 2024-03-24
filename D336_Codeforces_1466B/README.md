# B. Last minute enhancements

Source : [Problem](https://codeforces.com/problemset/problem/1466/B)

- time limit per test 1 second
- memory limit per test 256 megabytes
- input standard input
- output standard output

Athenaeus has just finished creating his latest musical composition and will present it tomorrow to the people of Athens. Unfortunately, the melody is rather dull and highly likely won't be met with a warm reception.

His song consists of 𝑛 notes, which we will treat as positive integers. The diversity of a song is the number of different notes it contains. As a patron of music, Euterpe watches over composers and guides them throughout the process of creating new melodies. She decided to help Athenaeus by changing his song to make it more diverse.

Being a minor goddess, she cannot arbitrarily change the song. Instead, for each of the 𝑛 notes in the song, she can either leave it as it is or increase it by 1.

Given the song as a sequence of integers describing the notes, find out the maximal, achievable diversity.

## Input

The input consists of multiple test cases. The first line contains an integer 𝑡 (1 ≤ 𝑡 ≤ 10000) — the number of test cases. Then 𝑡 test cases follow, each one is described in two lines.

In the first line of each test case there is a single integer 𝑛 (1 ≤ 𝑛 ≤ 10^5) denoting the length of the song. The next line contains a sequence of 𝑛 integers 𝑥1, 𝑥2, …, 𝑥𝑛 (1 ≤ 𝑥1 ≤ 𝑥2 ≤ … ≤ 𝑥𝑛 ≤ 2 ⋅ 𝑛), describing the song.

The sum of 𝑛 over all test cases does not exceed 10^5.

## Output

For each test case, you should output a single line containing precisely one integer, the maximal diversity of the song, i.e. the maximal possible number of different elements in the final sequence.

## Example

### Sample Input 1

    5
    6
    1 2 2 2 5 6
    2
    4 4
    6
    1 1 3 4 4 5
    1
    1
    6
    1 1 1 2 2 2

### Sample Output 1

    5
    2
    6
    1
    3

## Note

In the first test case, Euterpe can increase the second, fifth and sixth element to obtain the sequence 1, 3⎯⎯, 2, 2, 6⎯⎯, 7⎯⎯, which has 5 different elements (increased elements are underlined).

In the second test case, Euterpe can increase the first element to obtain the sequence 5⎯⎯, 4, which has 2 different elements.

In the third test case, Euterpe can increase the second, fifth and sixth element to obtain the sequence 1, 2⎯⎯, 3, 4, 5⎯⎯, 6⎯⎯, which has 6 different elements.
