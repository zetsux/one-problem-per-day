package d431leetcode1732

func largestAltitude(gain []int) int {
	alt := 0
	maxAlt := 0
	for _, n := range gain {
		alt += n
		if alt > maxAlt {
			maxAlt = alt
		}
	}

	return maxAlt
}
