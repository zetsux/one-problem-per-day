package d428leetcode1456

var vowelTable = ['z' + 1]bool{
	'a': true, 'e': true, 'i': true, 'o': true, 'u': true,
}

func maxVowels(s string, k int) int {
	sm := 0
	for i := 0; i < k; i++ {
		if isVowel(s[i]) {
			sm++
		}
	}
	mxSum := sm

	for i := k; i < len(s); i++ {
		if isVowel(s[i-k]) {
			sm--
		}

		if isVowel(s[i]) {
			sm++
			if sm > mxSum {
				mxSum = sm
			}
		}
	}

	return mxSum
}

func isVowel(c byte) bool {
	return vowelTable[c]
}
