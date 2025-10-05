package d427leetcode643

func findMaxAverage(nums []int, k int) float64 {
	sm := 0
	for i := 0; i < k; i++ {
		sm += nums[i]
	}

	mxSum := sm
	for i := k; i < len(nums); i++ {
		sm = sm - nums[i-k] + nums[i]
		if sm > mxSum {
			mxSum = sm
		}
	}

	ans := float64(mxSum) / float64(k)
	return ans
}
