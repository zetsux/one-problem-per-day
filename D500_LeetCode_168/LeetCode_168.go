package d500leetcode168

func convertToTitle(columnNumber int) string {
	res := make([]byte, 0, 10)

	for columnNumber > 0 {
		columnNumber--
		res = append(res, byte('A'+(columnNumber%26)))
		columnNumber /= 26
	}

	for i, j := 0, len(res)-1; i < j; i, j = i+1, j-1 {
		res[i], res[j] = res[j], res[i]
	}
	return string(res)
}
