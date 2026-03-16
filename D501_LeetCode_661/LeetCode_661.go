package d501leetcode661

func imageSmoother(img [][]int) [][]int {
	x := make([][]int, len(img))
	for i := 0; i < len(img); i++ {
		x[i] = make([]int, len(img[i]))
		for j := 0; j < len(img[i]); j++ {
			sm := img[i][j]
			cnt := 1

			if i > 0 {
				sm += img[i-1][j]
				cnt++
				if j > 0 {
					sm += img[i-1][j-1]
					cnt++
				}
				if j < len(img[i])-1 {
					sm += img[i-1][j+1]
					cnt++
				}
			}

			if i < len(img)-1 {
				sm += img[i+1][j]
				cnt++
				if j > 0 {
					sm += img[i+1][j-1]
					cnt++
				}
				if j < len(img[i])-1 {
					sm += img[i+1][j+1]
					cnt++
				}
			}

			if j > 0 {
				sm += img[i][j-1]
				cnt++
			}

			if j < len(img[i])-1 {
				sm += img[i][j+1]
				cnt++
			}

			x[i][j] = sm / cnt
		}
	}
	return x
}
