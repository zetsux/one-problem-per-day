package d439leetcode394

import "strings"

func decodeString(s string) string {
	var counts []int
	num := 0

	var strs []*strings.Builder
	ans := &strings.Builder{}
	strs = append(strs, ans)

	for i := 0; i < len(s); i++ {
		b := s[i]

		if b >= '0' && b <= '9' {
			num = num*10 + int(b-'0')
		} else if b == '[' {
			counts = append(counts, num)
			num = 0

			tmpStr := &strings.Builder{}
			strs = append(strs, tmpStr)
		} else if b == ']' {
			count := counts[len(counts)-1]
			counts = counts[:len(counts)-1]

			curStr := strs[len(strs)-1].String()
			strs = strs[:len(strs)-1]
			prevStr := strs[len(strs)-1]

			for count > 0 {
				prevStr.WriteString(curStr)
				count--
			}
		} else {
			strs[len(strs)-1].WriteByte(b)
		}
	}

	return strs[0].String()
}
