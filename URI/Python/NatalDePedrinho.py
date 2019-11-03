m = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 , 31]
# print(total)
while True:
    try:
        infos = [int(x) for x in input().split()]
        mes = infos[0]
        dia = infos[1]
        res = sum(m[:mes])+dia
        res = 360 - res
        if res == 1:
            print("E vespera de natal!")
        elif res == 0:
            print("E natal!")
        elif res < 0:
            print("Ja passou!")
        else:
            print("Faltam {} dias para o natal!".format(res))
    except EOFError:
        break