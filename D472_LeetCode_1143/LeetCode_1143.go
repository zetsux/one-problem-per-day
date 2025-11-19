package d472leetcode1143

func longestCommonSubsequence(text1 string, text2 string) int {
	dp := make([]int, len(text2)+1)
	for i := 1; i <= len(text1); i++ {
		prev := 0
		for j := 1; j <= len(text2); j++ {
			tmp := dp[j]

			if text1[i-1] == text2[j-1] {
				dp[j] = prev + 1
			} else {
				dp[j] = max(dp[j], dp[j-1])
			}

			prev = tmp
		}
	}

	return dp[len(text2)]
}
