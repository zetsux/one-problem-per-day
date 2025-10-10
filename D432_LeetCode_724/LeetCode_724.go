package d432leetcode724

func pivotIndex(nums []int) int {
	lSum, rSum, pIdx := 0, 0, 0
	for _, n := range nums[1:] {
		rSum += n
	}

	for pIdx < len(nums) && lSum != rSum {
		lSum += nums[pIdx]
		if pIdx < (len(nums) - 1) {
			rSum -= nums[pIdx+1]
		}
		pIdx++
	}

	if pIdx == len(nums) {
		return -1
	}
	return pIdx
}
