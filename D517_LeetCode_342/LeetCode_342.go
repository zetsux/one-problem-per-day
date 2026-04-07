package d517leetcode342

func isPowerOfFour(n int) bool {
	return n > 0 &&
		n&(n-1) == 0 &&
		n%3 == 1
}
