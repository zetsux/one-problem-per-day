package d516leetcode326

func isPowerOfThree(n int) bool {
	// 3^19 is the largest power of 3 that fits in a 32-bit signed integer
	return n > 0 && 1162261467%n == 0
}
