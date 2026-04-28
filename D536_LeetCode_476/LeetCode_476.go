package d536leetcode476

import "math/bits"

func findComplement(num int) int {
	mask := (1 << bits.Len(uint(num))) - 1
	return num ^ mask
}
