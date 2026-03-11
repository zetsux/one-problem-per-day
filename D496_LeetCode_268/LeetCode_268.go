package d496leetcode268

func missingNumber(nums []int) int {
	sm := len(nums) * (len(nums) + 1) / 2
	for i := 0; i < len(nums); i++ {
		sm -= nums[i]
	}
	return sm
}
