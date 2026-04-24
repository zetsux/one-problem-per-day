package d533leetcode459

import "strings"

func repeatedSubstringPattern(s string) bool {
	combined := s + s
	return strings.Contains(combined[1:len(combined)-1], s)
}
