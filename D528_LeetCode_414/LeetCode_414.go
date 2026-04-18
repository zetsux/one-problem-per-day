package d528leetcode414

func thirdMax(nums []int) int {
	var m1, m2, m3 *int
	for _, n := range nums {
		if (m1 != nil && n == *m1) || (m2 != nil && n == *m2) || (m3 != nil && n == *m3) {
			continue
		}

		if m3 == nil || n > *m3 {
			m1, m2, m3 = m2, m3, &n
		} else if m2 == nil || n > *m2 {
			m1, m2 = m2, &n
		} else if m1 == nil || n > *m1 {
			m1 = &n
		}
	}

	if m1 == nil {
		return *m3
	}
	return *m1
}
