package d540leetcode496

func nextGreaterElement(nums1 []int, nums2 []int) []int {
	ngeMap := make([]int, 10000)
	stk := []int{}
	for _, n := range nums2 {
		for len(stk) > 0 && n > stk[len(stk)-1] {
			ngeMap[stk[len(stk)-1]] = n
			stk = stk[:len(stk)-1]
		}
		stk = append(stk, n)
	}

	for _, n := range stk {
		ngeMap[n] = -1
	}

	ans := make([]int, len(nums1))
	for i, n := range nums1 {
		ans[i] = ngeMap[n]
	}
	return ans
}
