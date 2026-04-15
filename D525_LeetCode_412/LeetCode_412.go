package d525leetcode412

import "strconv"

func fizzBuzz(n int) []string {
	res := []string{}
	for i := 1; i <= n; i++ {
		str := ""
		if i%3 == 0 {
			str += "Fizz"
		}
		if i%5 == 0 {
			str += "Buzz"
		}

		if str == "" {
			str = strconv.Itoa(i)
		}
		res = append(res, str)
	}
	return res
}
