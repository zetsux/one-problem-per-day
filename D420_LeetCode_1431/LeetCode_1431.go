package d420leetcode1431

func kidsWithCandies(candies []int, extraCandies int) []bool {
	mx := 0
	for _, c := range candies {
		if c > mx {
			mx = c
		}
	}

	var res []bool
	for _, c := range candies {
		isGreatest := ((c + extraCandies) >= mx)
		res = append(res, isGreatest)
	}

	return res
}
