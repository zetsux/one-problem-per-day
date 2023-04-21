# Grasshopper and chain

Source : [Problem](https://www.eolymp.com/en/problems/11338)

-   Time limit 1 second
-   Memory limit 128 MiB

One day the grasshopper, as usual, was walking in the meadow. He found the chain. He was interested in one question, what is the minimum jump skill he needs to reach the end of the chain. Note that the chain only consists of uppercase English letters, and the grasshopper can only jump to vowels in the chain.

First, the grasshopper is located to the left of the leftmost symbol in the chain, and its goal is to get to the cell directly to the right of the rightmost symbol. In one jump, the grasshopper can jump any distance from 1 up to its jump skill. Let's look at the picture below for clarity.

<img src="https://static.eolymp.com/content/a0/a0a4a0196dd80a85246b171088ce69acf219b2d4.gif">

Note: The vowel letters are A, E, I, O, U и Y.

## Input

One string S (1 ≤ S ≤ 100), consisting of capital English letters.

## Output

Print one number - the minimum jumping ability of a grasshopper.

## Examples

### Input example #1

    ABABBBACFEYUKOTT

### Output example #1

    4

### Input example #2

    AAA

### Output example #2

    1
