package d509leetcode217

import "sort"

func containsDuplicate(nums []int) bool {
	// A. MAP APPROACH (actually better than sorting, but for this problem's test cases sorting seems to have better performance)
	/*
		check := make(map[int]bool, len(nums))
		for _, n := range nums {
			if check[n] {
				return true
			}
			check[n] = true
		}
	*/

	// B. SORTING APPROACH
	for i := 1; i < len(nums); i++ {
		if nums[i-1] == nums[i] {
			return true
		}
	}
	sort.Ints(nums)
	for i := 1; i < len(nums); i++ {
		if nums[i-1] == nums[i] {
			return true
		}
	}
	return false
}
