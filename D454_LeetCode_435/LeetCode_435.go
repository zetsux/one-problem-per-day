package d454leetcode435

import "slices"

func eraseOverlapIntervals(intervals [][]int) int {
	slices.SortFunc(intervals, func(x, y []int) int {
		return x[1] - y[1]
	})

	ans, prev := 0, intervals[0][1]
	for i := 1; i < len(intervals); i++ {
		if intervals[i][0] >= prev {
			prev = intervals[i][1]
		} else {
			ans++
		}
	}

	return ans
}
