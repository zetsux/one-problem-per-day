package d435leetcode1657

import "sort"

func closeStrings(word1 string, word2 string) bool {
	if len(word1) != len(word2) {
		return false
	}

	freq1, freq2 := make([]int, 26), make([]int, 26)
	for _, c := range word1 {
		freq1[c-'a']++
	}
	for _, c := range word2 {
		freq2[c-'a']++
	}
	for i := 0; i < 26; i++ {
		if (freq1[i] == 0 && freq2[i] > 0) || (freq2[i] == 0 && freq1[i] > 0) {
			return false
		}
	}

	sort.Ints(freq1)
	sort.Ints(freq2)

	for i := 0; i < 26; i++ {
		if freq1[i] != freq2[i] {
			return false
		}
	}

	return true
}
