package d424leetcode443

func compress(chars []byte) int {
	if len(chars) == 1 {
		return 1
	}

	prev := chars[0]
	cnt := 1
	idx := 0

	for _, c := range chars[1:] {
		if c == prev {
			cnt++
			continue
		}

		updateChars(chars, &idx, cnt, prev)
		cnt = 1
		prev = c
	}

	updateChars(chars, &idx, cnt, prev)
	return idx
}

func getNumBytes(cnt int) []byte {
	numByte := []byte{}
	n := cnt
	for n > 0 {
		x := n % 10
		n /= 10

		numByte = append(numByte, byte(x)+'0')
	}

	return numByte
}

func updateChars(chars []byte, idx *int, cnt int, prev byte) {
	chars[*idx] = prev
	*idx += 1
	if cnt > 1 {
		numBytes := getNumBytes(cnt)
		for i := len(numBytes) - 1; i >= 0; i-- {
			chars[*idx] = numBytes[i]
			*idx += 1
		}
	}
}
