inf = [int(x) for x in input().split()]
inicioH = inf[0]
inicioM = inf[1]
fimH = inf[2]
fimM = inf[3]
durH = 0
durM = 0
if (inicioH == fimH and inicioM == fimM):
    durH = 24

while (inicioH != fimH and inicioM != fimM):
    inicioH+=1
    durH+=1
    if (inicioH == 24):
        inicioH = 0

durM = fimM - inicioM
if (durM < 0):
    durH-=1
    durM += 60

print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(durH, durM))
