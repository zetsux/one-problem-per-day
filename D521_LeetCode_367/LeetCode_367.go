package d521leetcode367

func isPerfectSquare(num int) bool {
	l, r := 1, num
	for l <= r {
		m := (l + r) / 2
		if num > m*m {
			l = m + 1
		} else if num < m*m {
			r = m - 1
		} else {
			return true
		}
	}
	return false
}
