package d538leetcode485

func findMaxConsecutiveOnes(nums []int) int {
	mx, cns := 0, 0
	for _, n := range nums {
		if n == 1 {
			cns++
		} else {
			mx = max(mx, cns)
			cns = 0
		}
	}
	return max(mx, cns)
}
