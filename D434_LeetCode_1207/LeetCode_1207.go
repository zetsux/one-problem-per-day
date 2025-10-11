package d434leetcode1207

func uniqueOccurrences(arr []int) bool {
	check := make(map[int](int))
	for _, n := range arr {
		check[n]++
	}

	res := make(map[int]struct{})
	for n := range check {
		if _, exists := res[check[n]]; exists {
			return false
		} else {
			res[check[n]] = struct{}{}
		}
	}

	return true
}
