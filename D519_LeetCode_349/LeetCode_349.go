package d519leetcode349

func intersection(nums1 []int, nums2 []int) []int {
	check := make(map[int]bool, len(nums1))
	for _, n := range nums1 {
		check[n] = true
	}

	res := []int{}
	for _, n := range nums2 {
		if check[n] {
			res = append(res, n)
			check[n] = false
		}
	}
	return res
}
