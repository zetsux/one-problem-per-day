package d448leetcode216

func combinationSum3(k int, n int) [][]int {
	var res [][]int
	var cur []int
	generateCombinations(&res, &cur, n, k, 1)
	return res
}

func generateCombinations(res *[][]int, cur *[]int, n int, k int, num int) {
	if n == 0 && k == 0 {
		ans := append([]int{}, *cur...)
		*res = append(*res, ans)
		return
	}

	for i := num; i <= 9; i++ {
		if i > n || k <= 0 {
			break
		}

		*cur = append(*cur, i)
		generateCombinations(res, cur, n-i, k-1, i+1)
		*cur = (*cur)[:len(*cur)-1]
	}
}
