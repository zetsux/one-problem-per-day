# B. Missing Bigram

Source : [Problem](https://codeforces.com/problemset/problem/1618/B)

- time limit per test 2 seconds
- memory limit per test 256 megabytes
- input standard input
- output standard output

Polycarp has come up with a new game to play with you. He calls it "A missing bigram".

A bigram of a word is a sequence of two adjacent letters in it.

For example, word "abbaaba" contains bigrams "ab", "bb", "ba", "aa", "ab" and "ba".

The game goes as follows. First, Polycarp comes up with a word, consisting only of lowercase letters 'a' and 'b'. Then, he writes down all its bigrams on a whiteboard in the same order as they appear in the word. After that, he wipes one of them off the whiteboard.

Finally, Polycarp invites you to guess what the word that he has come up with was.

Your goal is to find any word such that it's possible to write down all its bigrams and remove one of them, so that the resulting sequence of bigrams is the same as the one Polycarp ended up with.

The tests are generated in such a way that the answer exists. If there are multiple answers, you can print any of them.

## Input

The first line contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 2000) — the number of testcases.

The first line of each testcase contains a single integer 𝑛 (3 ≤ 𝑛 ≤ 100) — the length of the word Polycarp has come up with.

The second line of each testcase contains 𝑛 − 2 bigrams of that word, separated by a single space. Each bigram consists of two letters, each of them is either 'a' or 'b'.

Additional constraint on the input: there exists at least one string such that it is possible to write down all its bigrams, except one, so that the resulting sequence is the same as the sequence in the input. In other words, the answer exists.

## Output

For each testcase print a word, consisting of 𝑛 letters, each of them should be either 'a' or 'b'. It should be possible to write down all its bigrams and remove one of them, so that the resulting sequence of bigrams is the same as the one Polycarp ended up with.

The tests are generated in such a way that the answer exists. If there are multiple answers, you can print any of them.

## Example

### Sample Input 1

    4
    7
    ab bb ba aa ba
    7
    ab ba aa ab ba
    3
    aa
    5
    bb ab bb

### Sample Output 1

    abbaaba
    abaabaa
    baa
    bbabb

## Note

The first two testcases from the example are produced from the word "abbaaba". As listed in the statement, it contains bigrams "ab", "bb", "ba", "aa", "ab" and "ba".

In the first testcase, the 5-th bigram is removed.

In the second testcase, the 2-nd bigram is removed. However, that sequence could also have been produced from the word "abaabaa". It contains bigrams "ab", "ba", "aa", "ab", "ba" and "aa". The missing bigram is the 6-th one.

In the third testcase, all of "baa", "aab" and "aaa" are valid answers.
