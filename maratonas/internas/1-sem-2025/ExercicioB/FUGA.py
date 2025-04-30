# DFS recusion
from collections import defaultdict
directions = [(-1, 0), (1, 0), (0, 1), (0, -1)]
rows, cols = map(int, input().split())
isAble = False
matrix = [0] * rows
source, destination = [], []
for row in range(rows):
    col = input()
    colitems = []
    for index, value in enumerate(col):
        colitems.append(value)
        if value == "S":
            source = [row, index]
        elif value == "E":
            destination = [row, index]
    matrix[row] = colitems

if source == destination:
    isAble = True
graph = defaultdict(list)
for row in range(rows):
    for col in range(cols):
        for dr, dc in directions:
            new_row, new_col = row + dr, col + dc
            if 0 <= new_row < rows and 0 <= new_col < cols:
                graph[(row, col)].append((new_row, new_col))


seen = []
seen.append(source)


def dfs(i):
    if i == destination:
        return True
    for nei_node in graph[i]:
        if nei_node not in seen:
            seen.add(nei_node)
            if dfs(nei_node):
                return True
    return False


isAble = dfs(source)


print(isAble)
