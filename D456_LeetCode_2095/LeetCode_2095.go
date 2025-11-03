package d456leetcode2095

// Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func deleteMiddle(head *ListNode) *ListNode {
	if head == nil || head.Next == nil {
		return nil
	}

	cur := head
	cnt := 0
	for cur != nil {
		cur = cur.Next
		cnt++
	}

	mid := (cnt / 2) - 1
	cur = head
	for i := 0; i < mid; i++ {
		cur = cur.Next
	}
	cur.Next = cur.Next.Next

	return head
}
