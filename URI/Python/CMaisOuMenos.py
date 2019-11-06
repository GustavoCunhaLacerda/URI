
n = -1
while True:
    dicio = {
        'suco' : 120,
        'morango' : 85,
        'mamao' : 85,
        'goiaba' : 70,
        'manga' : 56,
        'laranja' : 50,
        'brocolis' : 34
    }
    n = int(input())
    if n == 0:
        break
    soma = 0
    for i in range(n):
        infos = [x for x in input().split()]
        # print(infos[1])
        qte = int(infos[0])
        vit = dicio[infos[1]]
        qte_vitamina = qte*vit
        soma+=qte_vitamina
    
    if 110 <= soma <= 130:
        print("{} mg".format(soma))
    elif soma < 110:
        print("Mais {} mg".format(110 - soma))
    else:
        print("Menos {} mg".format(soma - 130))


