n = int(input())
preco = 0
for i in range(n):
    infos = [int(x) for x in input().split()]
    etiqueta = infos[0]
    qte = infos[1]
    if etiqueta == 1001:
        preco = preco + qte*1.50
    if etiqueta == 1002:
        preco = preco + qte*2.50
    if etiqueta == 1003:
        preco = preco + qte*3.50
    if etiqueta == 1004:
        preco = preco + qte*4.50
    if etiqueta == 1005:
        preco = preco + qte*5.50
print("{:.2f}".format(preco))