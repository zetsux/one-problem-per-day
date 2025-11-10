package d463leetcode1372

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func longestZigZag(root *TreeNode) int {
	if root == nil {
		return 0
	}

	mx := 0
	exploreNodes(root.Left, true, &mx, 1)
	exploreNodes(root.Right, false, &mx, 1)
	return mx
}

func exploreNodes(node *TreeNode, isLastLeft bool, mx *int, streak int) {
	if node == nil {
		return
	}

	if streak > *mx {
		*mx = streak
	}

	if isLastLeft {
		exploreNodes(node.Right, false, mx, streak+1)
		exploreNodes(node.Left, true, mx, 1)
	} else {
		exploreNodes(node.Left, true, mx, streak+1)
		exploreNodes(node.Right, false, mx, 1)
	}
}
