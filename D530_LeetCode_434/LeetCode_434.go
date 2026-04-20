package d530leetcode434

import "strings"

func countSegments(s string) int {
	return len(strings.Fields(s))
}
