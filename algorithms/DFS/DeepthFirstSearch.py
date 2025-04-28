from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def maxDepth(self, root: Optional[TreeNode]) -> int:
    if root is None:
        return 0
    stack = [[root, 1]]
    res = 0
    while stack:
        node, maxDepth = stack.pop()
        res = max(res, maxDepth)
        stack.append([node.left, maxDepth+1])
        stack.append([node.right, maxDepth+1])
    return res
