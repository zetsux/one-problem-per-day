package d475leetcode72

func minDistance(word1 string, word2 string) int {
	prev := make([]int, len(word2)+1)
	cur := make([]int, len(word2)+1)

	for j := 0; j <= len(word2); j++ {
		prev[j] = j
	}

	for i := 1; i <= len(word1); i++ {
		cur[0] = i
		for j := 1; j <= len(word2); j++ {
			if word1[i-1] == word2[j-1] {
				cur[j] = prev[j-1]
				continue
			}
			cur[j] = min(cur[j-1], min(prev[j], prev[j-1])) + 1
		}
		prev, cur = cur, make([]int, len(word2)+1)
	}
	return prev[len(word2)]
}
