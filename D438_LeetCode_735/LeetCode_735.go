package d438leetcode735

import "math"

func asteroidCollision(asteroids []int) []int {
	aftermath := make([]int, len(asteroids))
	idx := 0
	aftermath[idx] = asteroids[0]

asteroidLoop:
	for i := 1; i < len(asteroids); i++ {
		isPrevRight := (idx >= 0 && aftermath[idx] > 0)
		isRight := (asteroids[i] > 0)

		for isPrevRight && !isRight {
			left, right := math.Abs(float64(aftermath[idx])), math.Abs(float64(asteroids[i]))
			if idx >= 0 {
				if left <= right {
					idx--
				}
				if left >= right {
					i++
				}
			}

			if i >= len(asteroids) {
				break asteroidLoop
			}
			isPrevRight = (idx >= 0 && aftermath[idx] > 0)
			isRight = (asteroids[i] > 0)
		}

		idx++
		aftermath[idx] = asteroids[i]
	}

	return aftermath[:idx+1]
}
