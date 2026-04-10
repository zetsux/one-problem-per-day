package d520leetcode350

func intersect(nums1 []int, nums2 []int) []int {
	if len(nums1) > len(nums2) {
		nums1, nums2 = nums2, nums1
	}

	check := make(map[int]int, len(nums1))
	for _, n := range nums1 {
		check[n]++
	}

	res := []int{}
	for _, n := range nums2 {
		if check[n] > 0 {
			res = append(res, n)
			check[n]--
		}
	}
	return res
}
