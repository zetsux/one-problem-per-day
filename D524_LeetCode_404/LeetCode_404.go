package d524leetcode404

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func sumOfLeftLeaves(root *TreeNode) int {
	return countSumLeft(root, false)
}

func countSumLeft(node *TreeNode, isLeft bool) int {
	if node == nil {
		return 0
	}

	if isLeft && node.Left == nil && node.Right == nil {
		return node.Val
	}
	return countSumLeft(node.Left, true) + countSumLeft(node.Right, false)
}
