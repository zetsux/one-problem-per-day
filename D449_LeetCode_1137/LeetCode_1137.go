package d449leetcode1137

func tribonacci(n int) int {
	if n == 0 {
		return n
	}

	n1, n2, n3 := 0, 1, 1
	for i := 3; i <= n; i++ {
		n1, n2, n3 = n2, n3, (n1 + n2 + n3)
	}
	return n3
}
