package d523leetcode389

func findTheDifference(s string, t string) byte {
	var ans byte
	for i := 0; i < len(s); i++ {
		ans ^= s[i]
		ans ^= t[i]
	}
	ans ^= t[len(t)-1]
	return ans
}
