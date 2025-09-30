package d422leetcode345

func reverseVowels(s string) string {
	l, r := 0, (len(s) - 1)

	res := []byte(s)
	for l < r {
		allVowel := true
		if !isVowel(res[l]) {
			l++
			allVowel = false
		}
		if !isVowel(res[r]) {
			r--
			allVowel = false
		}

		if allVowel {
			c := res[l]
			res[l] = res[r]
			res[r] = c

			l++
			r--
		}
	}

	return string(res)
}

func isVowel(b byte) bool {
	return b == 'a' || b == 'i' || b == 'u' || b == 'e' || b == 'o' ||
		b == 'A' || b == 'I' || b == 'U' || b == 'E' || b == 'O'
}
