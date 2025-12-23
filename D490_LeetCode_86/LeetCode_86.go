package d490leetcode86

// Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func partition(head *ListNode, x int) *ListNode {
	small, big := &ListNode{}, &ListNode{}
	smallTail, bigTail := small, big
	curr := head
	for curr != nil {
		if curr.Val < x {
			smallTail.Next = curr
			smallTail = smallTail.Next
		} else {
			bigTail.Next = curr
			bigTail = bigTail.Next
		}
		curr = curr.Next
	}

	smallTail.Next = big.Next
	bigTail.Next = nil
	return small.Next
}
