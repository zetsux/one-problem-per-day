package d495leetcode112

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func hasPathSum(root *TreeNode, targetSum int) bool {
	return iterateNode(root, targetSum, 0)
}

func iterateNode(node *TreeNode, targetSum int, curSum int) bool {
	if node == nil {
		return false
	}

	lastSum := curSum + node.Val
	if node.Left == nil && node.Right == nil {
		return targetSum == lastSum
	}

	return iterateNode(node.Left, targetSum, lastSum) || iterateNode(node.Right, targetSum, lastSum)
}
