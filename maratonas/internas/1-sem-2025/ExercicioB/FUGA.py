# DFS recusion

directions = [(-1, 0), (1, 0), (0, 1), (0, -1)]
rows, cols = map(int, input().split())
fuel = int(input())
isAble = False
matrix = []
source = destination = None
for row in range(rows):
    line = input()
    row_items = []
    for col, value in enumerate(line):
        row_items.append(value)
        if value == "S":
            source = (row, col)
        elif value == "E":
            destination = (row, col)
    matrix.append(row_items)


def dfs(pos, fuel_left, visited: set):
    global fuel
    if fuel_left < 0:
        return False
    if pos == destination:
        return True
    r, c = pos
    visited.add(pos)
    for dr, dc in directions:
        nr, nc = r + dr, c + dc
        if 0 <= nr < rows and 0 <= nc < cols:
            if matrix[nr][nc] != "X" and (nr, nc) not in visited:
                if dfs((nr, nc), fuel_left - 1, visited):
                    return True
    visited.remove(pos)
    return False
isAble = dfs(source, fuel, set())
print(isAble)
