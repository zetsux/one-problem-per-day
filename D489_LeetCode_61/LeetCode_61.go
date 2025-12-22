package d489leetcode61

// Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func rotateRight(head *ListNode, k int) *ListNode {
	if head == nil || head.Next == nil {
		return head
	}

	dummy := &ListNode{}

	cnt := 1
	tail := head
	for tail.Next != nil {
		tail = tail.Next
		cnt++
	}

	rot := k % cnt
	if rot == 0 {
		return head
	}

	tail.Next = head
	tailIdx := cnt - rot
	newTail := head
	for i := 1; i < tailIdx; i++ {
		newTail = newTail.Next
	}

	dummy.Next = newTail.Next
	newTail.Next = nil
	return dummy.Next
}
