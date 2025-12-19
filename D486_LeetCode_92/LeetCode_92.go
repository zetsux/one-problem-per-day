package d486leetcode92

// Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func reverseBetween(head *ListNode, left int, right int) *ListNode {
	if left == right || head == nil || head.Next == nil {
		return head
	}

	dummy := &ListNode{}
	dummy.Next = head
	prev := dummy
	for i := 0; i < left-1; i++ {
		prev = prev.Next
	}

	curr := prev.Next
	itr := right - left
	for i := 0; i < itr; i++ {
		forw := curr.Next
		curr.Next = forw.Next
		forw.Next = prev.Next
		prev.Next = forw
	}

	return dummy.Next
}
