package d426leetcode1679

func maxOperations(nums []int, k int) int {
	// O(nlogn) approach
	// sort the array, use two pointers to find pairs
	// that sum up to k

	/* sort.Slice(nums, func(i, j int) bool {
		return nums[i] < nums[j]
	})

	l, r, ans := 0, len(nums)-1, 0
	for l < r {
		sm := nums[l] + nums[r]
		if sm > k {
			r -= 1
		} else if sm < k {
			l += 1
		} else {
			ans += 1
			l += 1
			r -= 1
		}
	}

	return ans */

	// -------------------------------------------------

	// O(n) approach
	// use a map to store the count of each number
	// then for each number, check if k - number exists in the map
	// if it does, we can form a pair

	freqMap := make(map[int](int))
	ans := 0

	for _, n := range nums {
		if n >= k {
			continue
		}

		rm := k - n
		if freqMap[rm] > 0 {
			ans++
			freqMap[rm]--
		} else {
			freqMap[n]++
		}
	}

	return ans
}
