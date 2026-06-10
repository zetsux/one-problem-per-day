package d545leetcode520

func detectCapitalUse(word string) bool {
	capsCnt := 0
	for _, c := range word {
		if isCap(byte(c)) {
			capsCnt++
		}
	}

	return capsCnt == 0 || capsCnt == len(word) ||
		(capsCnt == 1 && isCap(word[0]))
}

func isCap(c byte) bool {
	return c >= 'A' && c <= 'Z'
}
