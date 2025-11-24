package d478leetcode1466

func minReorder(n int, connections [][]int) int {
	adj := make([][]int, n)
	for _, c := range connections {
		a, b := c[0], c[1]
		adj[a] = append(adj[a], b)
		adj[b] = append(adj[b], -a)
	}

	visited := make([]bool, n)
	visited[0] = true

	stack := []int{0}
	cnt := 0
	for len(stack) > 0 {
		last := len(stack) - 1
		node := stack[last]
		stack = stack[:last]

		for _, next := range adj[node] {
			absNext := next
			if next < 0 {
				absNext = -next
			}

			if !visited[absNext] {
				visited[absNext] = true
				if next > 0 {
					cnt++
				}
				stack = append(stack, absNext)
			}
		}
	}

	return cnt
}
