package d441leetcode649

func predictPartyVictory(senate string) string {
	idx := 0
	rPool, dPool := []int{}, []int{}
	for i := 0; i < len(senate); i++ {
		switch senate[i] {
		case 'R':
			rPool = append(rPool, i)
		default:
			dPool = append(dPool, i)
		}
	}

	for {
		if idx >= len(rPool) {
			return "Dire"
		} else if idx >= len(dPool) {
			return "Radiant"
		}

		rPos, dPos := rPool[idx], dPool[idx]
		if rPos < dPos {
			rPool = append(rPool, rPos+len(senate))
		} else {
			dPool = append(dPool, dPos+len(senate))
		}
		idx++
	}
}
