infos = [int(x) for x in input().split()]
salto = infos[0]
qte = infos[1]
win = True

canos = [int(x) for x in input().split()]

for i in range(qte-1):
    aux = canos[i] - canos[i+1]
    if  aux < -salto or aux > salto:
        
        win = False
        break

if win == True:
    print("YOU WIN")
else:
    print("GAME OVER")

    
