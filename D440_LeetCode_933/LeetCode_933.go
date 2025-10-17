package d440leetcode933

type RecentCounter struct {
	Records []int
	Start   int
}

func Constructor() RecentCounter {
	return RecentCounter{}
}

func (this *RecentCounter) Ping(t int) int {
	this.Records = append(this.Records, t)

	idx := this.Start
	limit := t - 3000
	for this.Records[idx] < limit {
		idx++
	}
	this.Start = idx
	return len(this.Records) - this.Start
}

/**
 * Your RecentCounter object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Ping(t);
 */
