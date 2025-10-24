package d446leetcode338

func countBits(n int) []int {
	res := make([]int, n+1)
	res[0] = 0

	for i := 1; i <= n; i++ {
		res[i] = res[i>>1] + (i & 1)
	}
	return res
}
