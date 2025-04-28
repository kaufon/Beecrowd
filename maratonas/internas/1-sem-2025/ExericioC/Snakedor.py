def calcular_valor(nome):
    valor = 0
    for i in nome:
        valor += ord(i.lower()) - ord('a') + 1
    return valor


nomes = input().split()
nomes.sort(key=calcular_valor)
print(" ".join(nomes))
