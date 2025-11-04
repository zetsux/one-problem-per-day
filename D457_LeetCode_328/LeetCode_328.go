package d457leetcode328

// Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func oddEvenList(head *ListNode) *ListNode {
	if head == nil || head.Next == nil || head.Next.Next == nil {
		return head
	}

	evenHead := head.Next
	oddNode, evenNode := head, evenHead
	for evenNode != nil && evenNode.Next != nil {
		oddNode.Next = evenNode.Next
		oddNode = oddNode.Next

		evenNode.Next = oddNode.Next
		evenNode = evenNode.Next
	}

	oddNode.Next = evenHead
	return head
}
