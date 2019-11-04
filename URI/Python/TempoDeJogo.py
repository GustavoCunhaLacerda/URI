inf = [int(x) for x in input().split()]
ini = inf[0]
fim = inf[1]
dur = fim -ini

if dur == 0:
    dur = 24
elif dur < 0:
    dur+=24
print("O JOGO DUROU {} HORA(S)".format(dur))