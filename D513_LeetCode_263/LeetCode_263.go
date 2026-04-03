package d513leetcode263

func isUgly(n int) bool {
	if n == 0 {
		return false
	}

	divs := []int{2, 3, 5}
	for _, d := range divs {
		for n%d == 0 {
			n /= d
		}
	}
	return n == 1
}
