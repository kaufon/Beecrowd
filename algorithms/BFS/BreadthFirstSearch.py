from typing import Optional
from collections import deque


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


 def BFS(self, root: Optional[TreeNode]) -> int:
    queue = deque()
    if root:
        queue.append(root)
    level = 0
    while queue:
        for i in range(len(queue)):
            node = queue.popleft()
            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)
        level +=1
    return level
