package d534leetcode461

func hammingDistance(x int, y int) int {
	diff, sm := x^y, 0
	for diff > 0 {
		diff &= (diff - 1)
		sm++
	}
	return sm
}
