package d527leetcode409

func longestPalindrome(s string) int {
	cnt := make([]int, 128)
	pairs := 0
	for _, c := range s {
		cnt[c]++

		if cnt[c]&1 == 0 {
			pairs++
		}
	}

	ans := pairs * 2
	if ans < len(s) {
		ans++
	}
	return ans
}
