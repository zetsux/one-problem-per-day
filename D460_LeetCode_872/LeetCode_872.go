package d460leetcode872

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func leafSimilar(root1 *TreeNode, root2 *TreeNode) bool {
	leafs1, leafs2 := []int{}, []int{}
	exploreLeaf(root1, &leafs1)
	exploreLeaf(root2, &leafs2)

	if len(leafs1) != len(leafs2) {
		return false
	}

	for i := 0; i < len(leafs1); i++ {
		if leafs1[i] != leafs2[i] {
			return false
		}
	}
	return true
}

func exploreLeaf(node *TreeNode, leafs *[]int) {
	if node.Left == nil && node.Right == nil {
		*leafs = append(*leafs, node.Val)
		return
	}

	if node.Left != nil {
		exploreLeaf(node.Left, leafs)
	}

	if node.Right != nil {
		exploreLeaf(node.Right, leafs)
	}
}
