inf = [int(x) for x in input().split()]
if inf[0]%inf[1] == 0 or inf[1]%inf[0] == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")