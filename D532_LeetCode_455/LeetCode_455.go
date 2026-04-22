package d532leetcode455

import "sort"

func findContentChildren(g []int, s []int) int {
	sort.Ints(g)
	sort.Ints(s)

	idx, ans := 0, 0
	for _, need := range g {
		for idx < len(s) && s[idx] < need {
			idx++
		}

		if idx == len(s) {
			break
		}
		ans++
		idx++
	}
	return ans
}
