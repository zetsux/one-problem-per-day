package d451leetcode198

func rob(nums []int) int {
	prevMx, curMx := 0, 0

	for _, n := range nums {
		mx := prevMx + n
		if mx < curMx {
			mx = curMx
		}
		prevMx = curMx
		curMx = mx
	}

	return curMx
}
