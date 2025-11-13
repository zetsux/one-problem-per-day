package d466leetcode1161

import "math"

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// DFS Approach
func maxLevelSumDFS(root *TreeNode) int {
	sums := []int{}
	exploreNodes(root, 0, &sums)

	mxSum, mxIdx := math.MinInt, 1
	for key, val := range sums {
		if val > mxSum {
			mxSum = val
			mxIdx = key + 1
		}
	}
	return mxIdx
}

func exploreNodes(node *TreeNode, depth int, sums *[]int) {
	if node == nil {
		return
	}

	if len(*sums) <= depth {
		*sums = append(*sums, 0)
	}
	(*sums)[depth] += node.Val

	exploreNodes(node.Left, depth+1, sums)
	exploreNodes(node.Right, depth+1, sums)
}

// BFS Approach
func maxLevelSumBFS(root *TreeNode) int {
	queue := []*TreeNode{root}
	level := 1
	mxSum, mxLevel := math.MinInt, 1

	for len(queue) > 0 {
		levelSize := len(queue)
		levelSum := 0

		for i := 0; i < levelSize; i++ {
			node := queue[0]
			queue = queue[1:]
			levelSum += node.Val

			if node.Left != nil {
				queue = append(queue, node.Left)
			}
			if node.Right != nil {
				queue = append(queue, node.Right)
			}
		}

		if levelSum > mxSum {
			mxSum = levelSum
			mxLevel = level
		}
		level++
	}

	return mxLevel
}
