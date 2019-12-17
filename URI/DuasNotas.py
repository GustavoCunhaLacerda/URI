notas = (2, 5, 10, 20, 50, 100)

while True:
    valor = [int(x) for x in input().split()]
    if valor[0] == valor[1] == 0:
        break
    
    troco = valor[1] - valor[0]
    possivel = True
    for val in notas:
        if troco%val == 0:
            possivel = True
    if possivel == True:
        print("possible")
    else:
        print("impossible")


