package d543leetcode509

func fib(n int) int {
	if n <= 1 {
		return n
	}

	n1, n2 := 1, 1
	for i := 3; i <= n; i++ {
		n1, n2 = n2, n1+n2
	}
	return n2
}
