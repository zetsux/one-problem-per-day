package d429leetcode1004

func longestOnes(nums []int, k int) int {
	zeroCnt, startIdx, maxLen := 0, 0, 0
	for idx := 0; idx < len(nums); idx++ {
		if nums[idx] == 0 {
			zeroCnt++
		}

		for zeroCnt > k {
			if nums[startIdx] == 0 {
				zeroCnt--
			}
			startIdx++
		}

		curLen := idx - startIdx + 1
		if curLen > maxLen {
			maxLen = curLen
		}
	}

	return maxLen
}
