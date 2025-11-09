package d462leetcode437

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func pathSum(root *TreeNode, targetSum int) int {
	if root == nil {
		return 0
	}

	sums := map[int]int{0: 1}
	return countTargetPaths(root, targetSum, 0, sums)
}

func countTargetPaths(node *TreeNode, targetSum, curSum int, sums map[int]int) int {
	curSum += node.Val
	count := sums[curSum-targetSum]

	sums[curSum]++

	if node.Left != nil {
		count += countTargetPaths(node.Left, targetSum, curSum, sums)
	}
	if node.Right != nil {
		count += countTargetPaths(node.Right, targetSum, curSum, sums)
	}

	sums[curSum]--
	return count
}
