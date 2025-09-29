package d421leetcode605

func canPlaceFlowers(flowerbed []int, n int) bool {
	for i, bed := range flowerbed {
		if bed == 1 || (i > 0 && (flowerbed[i-1] == 1)) ||
			(i < (len(flowerbed)-1) && (flowerbed[i+1] == 1)) {
			continue
		}
		flowerbed[i] = 1
		n -= 1
	}

	return n <= 0
}
