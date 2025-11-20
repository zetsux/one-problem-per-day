package d473leetcode20

func isValid(s string) bool {
	if len(s)&1 == 1 {
		return false
	}

	stack := []byte{}
	for i := 0; i < len(s); i++ {
		curLen := len(stack)
		if curLen == 0 {
			stack = append(stack, s[i])
			continue
		}

		top := stack[curLen-1]
		switch s[i] {
		case ']':
			if top != '[' {
				return false
			}
			stack = stack[:curLen-1]
		case '}':
			if top != '{' {
				return false
			}
			stack = stack[:curLen-1]
		case ')':
			if top != '(' {
				return false
			}
			stack = stack[:curLen-1]
		default:
			stack = append(stack, s[i])
		}
	}
	return len(stack) == 0
}
