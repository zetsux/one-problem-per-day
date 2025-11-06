package d459leetcode104

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func maxDepth(root *TreeNode) int {
	if root == nil {
		return 0
	}

	ans := 1
	exploreDepth(root, 1, &ans)
	return ans
}

func exploreDepth(root *TreeNode, depth int, maxDepth *int) {
	if root.Left == nil && root.Right == nil {
		if depth > *maxDepth {
			*maxDepth = depth
		}
		return
	}

	if root.Right != nil {
		exploreDepth(root.Right, depth+1, maxDepth)
	}

	if root.Left != nil {
		exploreDepth(root.Left, depth+1, maxDepth)
	}
}
