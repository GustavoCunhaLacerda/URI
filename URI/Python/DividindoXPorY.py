n = int(input())
for i in range(n):
    inf = [int(x) for x in input().split()]
    x = inf[0]
    y = inf[1]
    if y == 0:
        print("divisao impossivel")
    else:
        print("{:.1f}".format(x/y))