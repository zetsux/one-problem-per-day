package d488leetcode82

// Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func deleteDuplicates(head *ListNode) *ListNode {
	if head == nil || head.Next == nil {
		return head
	}

	dummy := &ListNode{Val: -1, Next: head}
	curr, prev := head, dummy
	for curr != nil {
		if curr.Next != nil && curr.Val == curr.Next.Val {
			val := curr.Val
			for curr != nil && curr.Val == val {
				curr = curr.Next
			}
			prev.Next = curr
		} else {
			prev = curr
			curr = curr.Next
		}
	}
	return dummy.Next
}
