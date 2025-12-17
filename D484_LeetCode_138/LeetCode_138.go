package d484leetcode138

// Definition for a Node.
type Node struct {
	Val    int
	Next   *Node
	Random *Node
}

func copyRandomList(head *Node) *Node {
	curr := head
	nodeMap := make(map[*Node]*Node)
	for curr != nil {
		nodeMap[curr] = &Node{Val: curr.Val}
		curr = curr.Next
	}

	curr = head
	for curr != nil {
		node := nodeMap[curr]
		node.Next = nodeMap[curr.Next]
		node.Random = nodeMap[curr.Random]
		curr = curr.Next
	}
	return nodeMap[head]
}
