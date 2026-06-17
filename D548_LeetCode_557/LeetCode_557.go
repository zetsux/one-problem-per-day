package d548leetcode557

func reverseWords(s string) string {
	text, l := []byte(s), 0
	for i := 0; i <= len(text); i++ {
		if i == len(text) || text[i] == ' ' {
			reverse(text[l:i])
			l = i + 1
		}
	}
	return string(text)
}

func reverse(word []byte) {
	l, r := 0, len(word)-1
	for l < r {
		word[l], word[r] = word[r], word[l]
		l++
		r--
	}
}
