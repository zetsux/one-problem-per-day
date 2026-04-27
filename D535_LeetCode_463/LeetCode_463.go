package d535leetcode463

func islandPerimeter(grid [][]int) int {
	ans := 0
	for i := 0; i < len(grid); i++ {
		for j := 0; j < len(grid[i]); j++ {
			if grid[i][j] == 0 {
				continue
			}

			if i == 0 || grid[i-1][j] == 0 {
				ans++
			}
			if j == 0 || grid[i][j-1] == 0 {
				ans++
			}
			if i == len(grid)-1 || grid[i+1][j] == 0 {
				ans++
			}
			if j == len(grid[i])-1 || grid[i][j+1] == 0 {
				ans++
			}
		}
	}
	return ans
}
