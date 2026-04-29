package d537leetcode482

func licenseKeyFormatting(s string, k int) string {
	ans, groupCnt := []byte{}, 0
	for i := len(s) - 1; i >= 0; i-- {
		if s[i] == '-' {
			continue
		}

		if groupCnt == k {
			ans = append(ans, '-')
			groupCnt = 0
		}

		c := s[i]
		if c >= 'a' {
			c -= 32
		}
		ans = append(ans, c)
		groupCnt++
	}

	for i, j := 0, len(ans)-1; i < j; i, j = i+1, j-1 {
		ans[i], ans[j] = ans[j], ans[i]
	}
	return string(ans)
}
