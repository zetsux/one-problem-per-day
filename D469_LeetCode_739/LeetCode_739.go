package d469leetcode739

var stack, ans [1e5]int

func dailyTemperatures(temperatures []int) []int {
	stack[0], ans[0] = 0, 0
	stackLen := 1

	for i := 1; i < len(temperatures); i++ {
		for stackLen > 0 &&
			temperatures[i] > temperatures[stack[stackLen-1]] {
			ans[stack[stackLen-1]] = i - stack[stackLen-1]
			stackLen -= 1
		}
		stack[stackLen] = i
		stackLen += 1
		ans[i] = 0
	}
	return ans[:len(temperatures)]
}
