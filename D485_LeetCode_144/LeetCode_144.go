package d485leetcode144

type MinStack struct {
	Stack []int
	Mins  []int
}

func Constructor() MinStack {
	return MinStack{}
}

func (this *MinStack) Push(val int) {
	this.Stack = append(this.Stack, val)
	if len(this.Mins) == 0 || val <= this.Mins[len(this.Mins)-1] {
		this.Mins = append(this.Mins, val)
	}
}

func (this *MinStack) Pop() {
	if this.Mins[len(this.Mins)-1] == this.Stack[len(this.Stack)-1] {
		this.Mins = this.Mins[:len(this.Mins)-1]
	}
	this.Stack = this.Stack[:len(this.Stack)-1]
}

func (this *MinStack) Top() int {
	return this.Stack[len(this.Stack)-1]
}

func (this *MinStack) GetMin() int {
	return this.Mins[len(this.Mins)-1]
}

/**
 * Your MinStack object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(val);
 * obj.Pop();
 * param_3 := obj.Top();
 * param_4 := obj.GetMin();
 */
