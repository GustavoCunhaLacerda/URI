while True:
    try:
        n = int(input())
        inf = [int(x) for x in input().split()]
        votos = sum(inf)
        if votos >= n*2.0/3.0:
            print("impeachment")
        else:
            print("acusacao arquivada")
    
    except EOFError:
        break