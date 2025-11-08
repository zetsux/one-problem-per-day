package d461leetcode1448

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func goodNodes(root *TreeNode) int {
	if root == nil {
		return 0
	}
	cnt := 0
	exploreNodes(root, root.Val, &cnt)
	return cnt
}

func exploreNodes(node *TreeNode, prevMax int, cnt *int) {
	if node == nil {
		return
	}

	if node.Val >= prevMax {
		(*cnt)++
	}

	newMax := prevMax
	if node.Val > prevMax {
		newMax = node.Val
	}

	exploreNodes(node.Left, newMax, cnt)
	exploreNodes(node.Right, newMax, cnt)
}
