package d494leetcode35

func searchInsert(nums []int, target int) int {
	l, r := 0, len(nums)-1
	for l <= r {
		m := (l + r) / 2
		if target == nums[m] {
			return m
		} else if target > nums[m] {
			l = m + 1
		} else {
			r = m - 1
		}
	}

	return l
}
