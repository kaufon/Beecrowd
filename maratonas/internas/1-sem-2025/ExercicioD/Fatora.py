# numero = int(input(""))
# array = []
# while numero > 1:
#     for i in range(2,numero+1):
#         if numero % i == 0:
#             array.append(i)
#             numero = numero // i
#             break
#
# hash = {}
# for i in array:
#     hash[i] = array.count(i)
#
# ans = ""
# for index in hash:
#     ans+=f"{index}({hash[index]})"
# print(ans)
numero = int(input(""))
array = []
divisor = 2
while numero > 1:
    while numero % divisor == 0:
        array.append(divisor)
        numero = numero // divisor
    divisor += 1

ans = ""
for i in set(array):
    ans += f"{i}({array.count(i)})"

print(ans)


