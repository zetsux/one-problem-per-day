package d541leetcode500

func findWords(words []string) []string {
	rowCheck := make([]int, 26)
	row1, row2, row3 := "qwertyuiop", "asdfghjkl", "zxcvbnm"
	for _, c := range row1 {
		rowCheck[c-'a'] = 1
	}
	for _, c := range row2 {
		rowCheck[c-'a'] = 2
	}
	for _, c := range row3 {
		rowCheck[c-'a'] = 3
	}

	ans := []string{}
	for _, word := range words {
		cur, isValid := rowCheck[getIndex(word[0])], true
		for i := 1; i < len(word); i++ {
			if rowCheck[getIndex(word[i])] != cur {
				isValid = false
				break
			}
		}
		if isValid {
			ans = append(ans, word)
		}
	}
	return ans
}

func getIndex(c byte) byte {
	if c > 'Z' {
		return c - 'a'
	}
	return c - 'A'
}
