package d468leetcode450

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func deleteNode(root *TreeNode, key int) *TreeNode {
	if root == nil {
		return nil
	}

	if root.Val == key {
		return removeNode(root)
	}

	rootNode := root
	for root != nil {
		if root.Val > key {
			if root.Left != nil && root.Left.Val == key {
				root.Left = removeNode(root.Left)
				break
			}
			root = root.Left
		} else {
			if root.Right != nil && root.Right.Val == key {
				root.Right = removeNode(root.Right)
				break
			}
			root = root.Right
		}
	}
	return rootNode
}

func removeNode(node *TreeNode) *TreeNode {
	if node.Left == nil {
		return node.Right
	} else if node.Right == nil {
		return node.Left
	}

	rightMost := node.Left
	for rightMost.Right != nil {
		rightMost = rightMost.Right
	}
	rightMost.Right = node.Right

	return node.Left
}
