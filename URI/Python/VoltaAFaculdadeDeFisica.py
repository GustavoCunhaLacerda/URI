while True:
    try:
        inf = [int(x) for x in input().split()]
        print("{}".format(inf[0]*inf[1]*2))
    except EOFError:
        break