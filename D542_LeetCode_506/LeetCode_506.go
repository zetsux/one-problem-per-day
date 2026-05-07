package d542leetcode506

import (
	"sort"
	"strconv"
)

func findRelativeRanks(score []int) []string {
	idxs := make([]int, len(score))
	for i := range idxs {
		idxs[i] = i
	}
	sort.Slice(idxs, func(i, j int) bool {
		return score[idxs[i]] > score[idxs[j]]
	})

	ans := make([]string, len(score))
	for rank, idx := range idxs {
		switch rank {
		case 0:
			ans[idx] = "Gold Medal"
		case 1:
			ans[idx] = "Silver Medal"
		case 2:
			ans[idx] = "Bronze Medal"
		default:
			ans[idx] = strconv.Itoa(rank + 1)
		}
	}
	return ans
}
