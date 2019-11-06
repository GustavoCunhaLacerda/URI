while True:
    try:
        inf = [int(x) for x in input().split()]
        print("{}".format(abs(inf[0]-inf[1])))
    except EOFError:
        break