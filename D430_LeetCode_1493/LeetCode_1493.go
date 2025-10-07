package d430leetcode1493

func longestSubarray(nums []int) int {
	zeroCount, maxLen, startIdx := 0, 0, 0
	for i := 0; i < len(nums); i++ {
		if nums[i] == 0 {
			zeroCount++
		}

		for zeroCount > 1 {
			if nums[startIdx] == 0 {
				zeroCount--
			}
			startIdx++
		}

		curLen := i - startIdx
		if curLen > maxLen {
			maxLen = curLen
		}
	}

	return maxLen
}
