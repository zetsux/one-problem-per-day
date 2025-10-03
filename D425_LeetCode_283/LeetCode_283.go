package d425leetcode283

func moveZeroes(nums []int) {
	nonZeroIdx := 0
	for i, n := range nums {
		if n != 0 {
			nums[i], nums[nonZeroIdx] = nums[nonZeroIdx], nums[i]
			nonZeroIdx++
		}
	}
}
