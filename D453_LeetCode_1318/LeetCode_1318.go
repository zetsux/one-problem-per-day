package d453leetcode1318

import "math/bits"

func minFlips(a int, b int, c int) int {
	flipBits := (a | b) ^ c
	extraFlips := uint(flipBits & (a & b))
	return bits.OnesCount(uint(flipBits)) + bits.OnesCount(extraFlips)
}
