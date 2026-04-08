package d518leetcode344

func reverseString(s []byte) {
	for i := 0; i < len(s)>>1; i++ {
		rIdx := len(s) - 1 - i
		s[i], s[rIdx] = s[rIdx], s[i]
	}
}
