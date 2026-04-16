package d526leetcode415

func addStrings(num1 string, num2 string) string {
	i1, i2, rm := len(num1)-1, len(num2)-1, 0
	res := []rune{}
	for i1 >= 0 || i2 >= 0 || rm > 0 {
		var n1, n2 int
		if i1 >= 0 {
			n1 = int(num1[i1] - '0')
			i1--
		}
		if i2 >= 0 {
			n2 = int(num2[i2] - '0')
			i2--
		}

		nm := n1 + n2 + rm
		rm = (nm / 10)
		nm %= 10

		res = append(res, rune(nm+'0'))
	}

	for i := 0; i < len(res)/2; i++ {
		res[i], res[len(res)-1-i] = res[len(res)-1-i], res[i]
	}
	return string(res)
}
