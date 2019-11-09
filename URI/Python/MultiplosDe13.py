a = int(input())
b = int(input())
soma = 0
if b > a:
    aux = a
    a = b
    b = aux

for x in range(b, a+1):
    if x%13 != 0:
        soma += x

print(soma)