package d450leetcode746

func minCostClimbingStairs(cost []int) int {
	first := cost[0]
	second := cost[1]

	for i := 2; i < len(cost); i++ {
		mn := first
		if second < first {
			mn = second
		}

		cur := cost[i] + mn
		first = second
		second = cur
	}

	if second < first {
		return second
	}
	return first
}
