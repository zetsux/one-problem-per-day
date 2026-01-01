package d493leetcode101

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isSymmetric(root *TreeNode) bool {
	return compareNodes(root.Left, root.Right)
}

func compareNodes(node1 *TreeNode, node2 *TreeNode) bool {
	if node1 == nil {
		if node2 == nil {
			return true
		}
		return false
	} else if node2 == nil {
		return false
	}

	return node1.Val == node2.Val &&
		compareNodes(node1.Right, node2.Left) &&
		compareNodes(node1.Left, node2.Right)
}
