package d547leetcode551

func checkRecord(s string) bool {
	aCnt, lCnt := 0, 0
	for _, c := range s {
		if c == 'L' {
			lCnt++
			if lCnt >= 3 {
				return false
			}
		} else {
			if c == 'A' {
				aCnt++
				if aCnt >= 2 {
					return false
				}
			}
			lCnt = 0
		}
	}
	return aCnt < 2 && lCnt < 3
}
