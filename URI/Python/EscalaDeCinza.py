n = int(input())
for i in range(n):
    op = input()
    inf = [int(x) for x in input().split()]
    if op == 'min':
        res = min(inf)
    if op == 'max':
        res = max(inf)
    if op == 'mean':
        res = int(sum(inf)/3)
    if op == 'eye':
        res =int(0.30*inf[0] + 0.59*inf[1] + 0.11*inf[2])

    print("Caso #{}: {}".format(i+1, res))