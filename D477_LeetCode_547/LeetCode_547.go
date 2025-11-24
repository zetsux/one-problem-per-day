package d477leetcode547

func findCircleNum(isConnected [][]int) int {
	n := len(isConnected)
	visited := make([]bool, n)
	ans := 0

	for i := 0; i < n; i++ {
		if visited[i] {
			continue
		}
		dfs(i, &visited, isConnected)
		ans++
	}
	return ans
}

func dfs(city int, visited *[]bool, isConnected [][]int) {
	(*visited)[city] = true
	for i := 0; i < len(isConnected); i++ {
		if isConnected[city][i] == 1 && !(*visited)[i] {
			dfs(i, visited, isConnected)
		}
	}
}
