package d474leetcode714

import "math"

func maxProfit(prices []int, fee int) int {
	bought, sold := math.MinInt, 0
	for _, p := range prices {
		bought = max(bought, sold-p)
		sold = max(sold, bought+p-fee)
	}
	return sold
}
