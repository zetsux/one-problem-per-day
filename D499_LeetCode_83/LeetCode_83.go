package d499leetcode83

// Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func deleteDuplicates(head *ListNode) *ListNode {
	if head == nil || head.Next == nil {
		return head
	}

	lastVal := head.Val
	curHead := head
	for curHead.Next != nil {
		if curHead.Next.Val == lastVal {
			curHead.Next = curHead.Next.Next
		} else {
			lastVal = curHead.Next.Val
			curHead = curHead.Next
		}
	}
	return head
}
