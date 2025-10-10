package d433leetcode2215

func findDifference(nums1 []int, nums2 []int) [][]int {
	a, b := make(map[int]struct{}, len(nums1)), make(map[int]struct{}, len(nums2))
	ans := make([][]int, 2)

	for _, n := range nums1 {
		a[n] = struct{}{}
	}

	for _, n := range nums2 {
		b[n] = struct{}{}
	}

	for n := range a {
		if _, exists := b[n]; !exists {
			ans[0] = append(ans[0], n)
		}
	}

	for n := range b {
		if _, exists := a[n]; !exists {
			ans[1] = append(ans[1], n)
		}
	}

	return ans
}
