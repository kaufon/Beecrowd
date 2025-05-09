tecido, prevenda = map(int, input().split())
vendas = []
for i in range(3):
    custo, lucro = (map(int, input().split()))
    if tecido / custo >= prevenda:
        vendas.append([custo, lucro])
if len(vendas) <= 0:
    print("IMPOSSIVEL")
else:
    dp = [0] * tecido
    for custo, lucro in vendas:
        for j in range(tecido-1, custo,-1):
            dp[j] = max(dp[j], dp[tecido-custo]+lucro)
    print(dp[tecido-1])
