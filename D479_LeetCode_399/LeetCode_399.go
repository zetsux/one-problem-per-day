package d479leetcode399

func calcEquation(equations [][]string, values []float64, queries [][]string) []float64 {
	gr := make(map[string]map[string]float64)
	for i := 0; i < len(equations); i++ {
		dividend, divisor := equations[i][0], equations[i][1]

		if gr[dividend] == nil {
			gr[dividend] = make(map[string]float64)
		}
		if gr[divisor] == nil {
			gr[divisor] = make(map[string]float64)
		}

		gr[dividend][divisor] = values[i]
		gr[divisor][dividend] = 1.0 / values[i]
	}

	finalAns := []float64{}
	for _, q := range queries {
		dividend, divisor := q[0], q[1]

		_, ok1 := gr[dividend]
		_, ok2 := gr[divisor]
		if !ok1 || !ok2 {
			finalAns = append(finalAns, -1)
			continue
		}

		visited := make(map[string]bool)
		ans := dfs(dividend, divisor, gr, visited, 1.0)
		finalAns = append(finalAns, ans)
	}

	return finalAns
}

func dfs(curr, target string, gr map[string]map[string]float64, visited map[string]bool, value float64) float64 {
	if curr == target {
		return value
	}
	visited[curr] = true

	for nb, weight := range gr[curr] {
		if !visited[nb] {
			res := dfs(nb, target, gr, visited, value*weight)
			if res != -1 {
				return res
			}
		}
	}

	return -1
}
