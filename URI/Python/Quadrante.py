while True:
    inf = [int(a) for a in input().split()]
    x = inf[0]
    y = inf[1]
    if x > 0 and y > 0:
        print("primeiro")
    elif x < 0 and y > 0:
        print("segundo")
    elif x < 0 and y < 0:
        print("terceiro")
    elif x > 0 and y < 0:
        print("quarto")

    if x == 0 or y == 0:
        break
