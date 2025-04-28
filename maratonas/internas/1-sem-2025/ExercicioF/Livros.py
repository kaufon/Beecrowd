# def calcula_valo(x):
#     x = int(x)
#     return x%10
#
# n = int(input(""))
#
# numeros = input().split(maxsplit=n)
#
# numeros = numeros[0:n]
#
# numeros.sort(key=calcula_valo)
# print(" ".join(numeros))

# n = int(input(""))
# numeros = list(map(int, input().split(maxsplit=n)))
# numeros.sort(key=lambda x: x % 10)
# print(" ".join(str(x) for x in numeros))

n = int(input())
numeros = list(map(int, input().split()))[:n]
numeros.sort(key=lambda x: x % 10)
print(*numeros)
