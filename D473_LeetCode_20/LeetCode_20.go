package d473leetcode20

func isValid(s string) bool {
	if len(s)&1 == 1 {
		return false
	}

	bracketPairs := map[byte]byte{
		')': '(',
		']': '[',
		'}': '{',
	}

	stack := []byte{}
	for i := 0; i < len(s); i++ {
		if opener, ok := bracketPairs[s[i]]; ok {
			if len(stack) == 0 || opener != stack[len(stack)-1] {
				return false
			}
			stack = stack[:len(stack)-1]
			continue
		}
		stack = append(stack, s[i])
	}
	return len(stack) == 0
}
