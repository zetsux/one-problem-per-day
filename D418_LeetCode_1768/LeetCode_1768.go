package d418leetcode1768

import "strings"

func mergeAlternately(word1 string, word2 string) string {
	idx1 := len(word1)
	idx2 := len(word2)
	minIdx := idx1
	if idx2 < idx1 {
		minIdx = idx2
	}

	var resBuilder strings.Builder
	for i := 0; i < minIdx; i++ {
		resBuilder.WriteByte(word1[i])
		resBuilder.WriteByte(word2[i])
	}
	resBuilder.WriteString(word1[minIdx:])
	resBuilder.WriteString(word2[minIdx:])

	return resBuilder.String()
}
