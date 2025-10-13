package d436leetcode2352

func equalPairs(grid [][]int) int {
	n := len(grid)
	ans := 0
	rowMap := make(map[[200]int]int)

	arr := [200]int{}
	for _, r := range grid {
		copy(arr[:], r)
		rowMap[arr]++
	}

	for i := 0; i < n; i++ {
		colArr := [200]int{}
		for j := 0; j < n; j++ {
			colArr[j] = grid[j][i]
		}

		if cnt, exists := rowMap[colArr]; exists {
			ans += cnt
		}
	}

	return ans
}
