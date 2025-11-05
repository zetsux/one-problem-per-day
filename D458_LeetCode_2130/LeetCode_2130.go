package d458leetcode2130

// Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func pairSum(head *ListNode) int {
	slow := head
	fast := head

	for fast != nil && fast.Next != nil {
		slow = slow.Next
		fast = fast.Next.Next
	}

	var prev *ListNode
	for slow != nil {
		next := slow.Next
		slow.Next = prev
		prev = slow
		slow = next
	}

	mx := 0
	for prev != nil {
		sm := head.Val + prev.Val
		if sm > mx {
			mx = sm
		}

		head = head.Next
		prev = prev.Next
	}

	return mx
}
