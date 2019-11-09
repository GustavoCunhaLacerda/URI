media = 0
qte = 0
while True:
    nota = float(input())
    if 0 <= nota <= 10:
        media += nota
        qte+=1
    else:
        print("nota invalida")
    
    if qte == 2:
        break
print("media = {:.2f}".format(media/2))
