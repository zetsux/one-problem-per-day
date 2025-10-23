package d445leetcode875

import "math"

func minEatingSpeed(piles []int, h int) int {
	mn, mx := 1, 0
	for _, p := range piles {
		if p > mx {
			mx = p
		}
	}

	for mn < mx {
		mid := (mn + mx) / 2
		hour := 0
		for _, p := range piles {
			if p <= mid {
				hour++
				continue
			}

			req := int(math.Ceil(float64(p) / float64(mid)))
			hour += req
		}

		if hour <= h {
			mx = mid
		} else {
			mn = mid + 1
		}
	}
	return mn
}
