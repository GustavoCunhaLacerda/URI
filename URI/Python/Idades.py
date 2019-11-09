qte = 0
soma = 0
while True:
    idade = int(input())
    if idade < 0:
        break

    soma += idade
    qte += 1

print("{:.2f}".format(soma/qte))
