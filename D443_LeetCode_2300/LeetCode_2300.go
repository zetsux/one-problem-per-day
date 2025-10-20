package d443leetcode2300

import (
	"math"
	"sort"
)

func successfulPairs(spells []int, potions []int, success int64) []int {
	// Binary Search approach
	sort.Ints(potions)

	res := make([]int, len(spells))
	for i := 0; i < len(spells); i++ {
		l, r := 0, len(potions)
		for l < r {
			mid := (l + r) / 2
			if int64(potions[mid]*spells[i]) >= success {
				r = mid
			} else {
				l = mid + 1
			}
		}

		res[i] = len(potions) - l
	}

	return res

	// Prefix Sum approach
	mx := potions[0]
	for i := 1; i < len(potions); i++ {
		if potions[i] > mx {
			mx = potions[i]
		}
	}

	potCheck := make([]int, mx+1)
	for _, p := range potions {
		potCheck[p]++
	}

	for i := mx - 1; i >= 0; i-- {
		potCheck[i] += potCheck[i+1]
	}

	res2 := make([]int, len(spells))
	for i, s := range spells {
		req := int(math.Ceil(float64(success) / float64(s)))

		if req > mx {
			res2[i] = 0
		} else {
			res2[i] = potCheck[req]
		}
	}

	return res2
}
