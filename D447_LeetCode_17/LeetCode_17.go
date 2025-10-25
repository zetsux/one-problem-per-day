package d447leetcode17

func letterCombinations(digits string) []string {
	letterArrs := make([][]byte, len(digits))
	for i := 0; i < len(digits); i++ {
		letterArrs[i] = getLetterArr(digits[i])
	}

	res := []string{}
	combineLetters(&res, []byte{}, 0, letterArrs, digits)
	return res
}

func combineLetters(res *[]string, curStr []byte, idx int, letterArrs [][]byte, digits string) {
	if idx == len(digits) {
		*res = append(*res, string(curStr))
		return
	}

	for _, b := range letterArrs[idx] {
		curStr = append(curStr, b)
		combineLetters(res, curStr, idx+1, letterArrs, digits)
		curStr = curStr[:len(curStr)-1]
	}
}

func getLetterArr(b byte) []byte {
	switch b {
	case '2':
		return []byte{'a', 'b', 'c'}
	case '3':
		return []byte{'d', 'e', 'f'}
	case '4':
		return []byte{'g', 'h', 'i'}
	case '5':
		return []byte{'j', 'k', 'l'}
	case '6':
		return []byte{'m', 'n', 'o'}
	case '7':
		return []byte{'p', 'q', 'r', 's'}
	case '8':
		return []byte{'t', 'u', 'v'}
	default:
		return []byte{'w', 'x', 'y', 'z'}
	}
}
