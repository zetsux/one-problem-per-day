package d442leetcode374

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * func guess(num int) int;
 */

func guessNumber(n int) int {
	l, r := 1, n
	cur := (l + r) / 2

	for l < r {
		res := guess(cur)
		if res == 1 {
			l = cur + 1
		} else if res == -1 {
			r = cur - 1
		} else {
			return cur
		}

		cur = (l + r) / 2
	}

	return cur
}
