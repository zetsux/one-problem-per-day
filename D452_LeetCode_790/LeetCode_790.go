package d452leetcode790

const MOD = 1000000007

func numTilings(n int) int {
	prev3, prev2, prev1 := 1, 2, 5
	switch n {
	case 0:
		return 0
	case 1:
		return prev3
	case 2:
		return prev2
	case 3:
		return prev1
	}

	for i := 4; i <= n; i++ {
		cur := ((prev1 * 2) + prev3) % MOD
		prev3 = prev2
		prev2 = prev1
		prev1 = cur
	}
	return prev1
}
