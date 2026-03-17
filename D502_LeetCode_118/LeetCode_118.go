package d502leetcode118

func generate(numRows int) [][]int {
	x := make([][]int, numRows)
	for i := 0; i < numRows; i++ {
		x[i] = make([]int, i+1)
		x[i][0], x[i][i] = 1, 1

		for j := 1; j < i; j++ {
			x[i][j] = x[i-1][j-1] + x[i-1][j]
		}
	}
	return x
}
