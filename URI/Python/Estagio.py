while True:
    try:
        n = int(input())
        nomi = 0
        deno = 0
        for i in range(n):
            inf = [float(x) for x in input().split()]
            nomi += inf[1]*inf[0]
            deno += inf[1]
        
        deno*=100
        print("{:.4f}".format(nomi/deno))
    except EOFError:
        break