while True:
    try:
        n = int(input())
        rec = -1
        for i in range(n):
            inf = [float(x) for x in input().split()]
            if inf[1]/inf[0] > rec:
                rec = inf[1]/inf[0]
                print(i+1)
    
    except EOFError:
        break
