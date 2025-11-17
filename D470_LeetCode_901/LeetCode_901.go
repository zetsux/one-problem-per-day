package d470leetcode901

type Stock struct {
	price int
	span  int
}

type StockSpanner struct {
	stack []Stock
}

func Constructor() StockSpanner {
	return StockSpanner{}
}

func (this *StockSpanner) Next(price int) int {
	span := 1
	i := len(this.stack) - 1
	for i >= 0 && price >= this.stack[i].price {
		span += this.stack[i].span
		i--
	}

	this.stack = this.stack[:i+1]
	this.stack = append(this.stack, Stock{price, span})
	return span
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Next(price);
 */
