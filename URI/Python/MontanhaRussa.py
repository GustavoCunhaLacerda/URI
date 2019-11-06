while True:
    try:
        inf = [int(x) for x in input().split()]
        n = inf[0]
        mn = inf[1]
        mx = inf[2]
        qte = 0
        for i in range(n):
            aux = int(input())
            if mn <= aux <= mx:
                qte+=1
        print(qte)

    except EOFError:
        break