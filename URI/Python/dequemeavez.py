n = int(input())
for a in range(n):
    infos = [x for x in input().split()]
    numbers = [int(x) for x in input().split()]

    res = numbers[0] + numbers[1]
    if res%2 == 0:
        res = "PAR"
    else:
        res = "IMPAR"

    if infos[1] == res:
        print(infos[0])
    else:
        print(infos[2])