package d480leetcode71

import "strings"

func simplifyPath(path string) string {
	parts := strings.Split(path, "/")
	stack := []string{}

	for _, p := range parts {
		if p == "" || p == "." {
			continue
		}
		if p == ".." {
			if len(stack) > 0 {
				stack = stack[:len(stack)-1]
			}
		} else {
			stack = append(stack, p)
		}
	}

	return "/" + strings.Join(stack, "/")
}
