package d529leetcode448

func findDisappearedNumbers(nums []int) []int {
	for i := 0; i < len(nums); i++ {
		idx := abs(nums[i]) - 1
		if nums[idx] > 0 {
			nums[idx] = -nums[idx]
		}
	}

	ans := []int{}
	for i, n := range nums {
		if n > 0 {
			ans = append(ans, i+1)
		}
	}
	return ans
}

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
