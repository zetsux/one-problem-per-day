package d522leetcode387

func firstUniqChar(s string) int {
	check := make([]int, 26)
	for _, c := range s {
		check[c-'a']++
	}

	for i, c := range s {
		if check[c-'a'] == 1 {
			return i
		}
	}
	return -1
}
