package d497leetcode16

import "sort"

func threeSumClosest(nums []int, target int) int {
	sort.Ints(nums)

	ans := nums[0] + nums[1] + nums[2]
	for i := 0; i < len(nums); i++ {
		l, r := i+1, len(nums)-1
		for l < r {
			sm := nums[i] + nums[l] + nums[r]
			if intAbs(sm-target) < intAbs(ans-target) {
				ans = sm
			}

			if sm > target {
				r--
			} else if sm < target {
				l++
			} else {
				return sm
			}
		}
	}
	return ans
}

func intAbs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
