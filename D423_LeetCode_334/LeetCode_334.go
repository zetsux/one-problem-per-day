package d423leetcode334

import "math"

func increasingTriplet(nums []int) bool {
	n1, n2 := math.MaxInt, math.MaxInt
	for _, x := range nums {
		if x <= n1 {
			n1 = x
		} else if x <= n2 {
			n2 = x
		} else {
			return true
		}
	}
	return false
}
