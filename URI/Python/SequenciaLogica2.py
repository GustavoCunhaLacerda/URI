inf = [int(x) for x in input().split()]
quebra = inf[0]
n = inf[1]

for i in range(1, n+1):
    print(i, end="")
    if i%quebra == 0:
        print()
    else:
        print(" ", end="")