while True:
    try:
        inf = [int(x) for x in input().split()]
        notas = []
        for i in range(inf[0]):
            notas.append(int(input()))
        notas.sort()
        notas = notas[::-1]
        for i in range(inf[1]):
            aux = int(input())
            print("{}".format(notas[aux-1]))
    except EOFError:
        break