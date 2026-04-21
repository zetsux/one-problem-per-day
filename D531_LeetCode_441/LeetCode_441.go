package d531leetcode441

import "math"

func arrangeCoins(n int) int {
	// The number of coins needed to form a complete staircase with k rows is given by the formula: k * (k + 1) / 2.

	// We can rearrange this formula to find k in terms of n:
	// k * (k + 1) / 2 <= n
	// k^2 + k - 2n <= 0

	// Solving this quadratic inequality gives us the formula for k:
	return int((math.Sqrt(float64(8*n+1)) - 1) / 2)
}
