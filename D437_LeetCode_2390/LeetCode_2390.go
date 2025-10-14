package d437leetcode2390

func removeStars(s string) string {
	res := make([]byte, len(s))
	idx := 0
	for i := 0; i < len(s); i++ {
		if s[i] == '*' {
			idx--
		} else {
			res[idx] = s[i]
			idx++
		}
	}

	return string(res[:idx])
}
