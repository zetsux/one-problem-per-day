package d498leetcode1009

func bitwiseComplement(n int) int {
	if n == 0 {
		return 1
	}

	mask := 1
	for mask <= n {
		mask <<= 1
	}

	return (mask - 1) ^ n
}
