package d476leetcode841

func canVisitAllRooms(rooms [][]int) bool {
	visited := make([]bool, len(rooms))
	visited[0] = true
	cnt := 1

	queue := []int{0}
	for len(queue) != 0 {
		idx := queue[0]
		for _, k := range rooms[idx] {
			if !visited[k] {
				visited[k] = true
				queue = append(queue, k)
				cnt++
			}
		}
		queue = queue[1:]
	}
	return cnt == len(rooms)
}
