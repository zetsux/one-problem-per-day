package d544leetcode94

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func inorderTraversal(root *TreeNode) []int {
	return traverseInorder(root, []int{})
}

func traverseInorder(node *TreeNode, visited []int) []int {
	if node == nil {
		return visited
	}
	visited = traverseInorder(node.Left, visited)
	visited = append(visited, node.Val)
	visited = traverseInorder(node.Right, visited)
	return visited
}
