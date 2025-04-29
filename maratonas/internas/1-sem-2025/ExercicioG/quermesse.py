n = int(input())
participantes = list(map(int, input().split()))[:n]
ans = 0
for index, value in enumerate(participantes):
    if value == index+1:
        ans = value
        break
print(ans)

