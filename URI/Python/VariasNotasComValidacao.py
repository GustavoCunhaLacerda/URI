media = 0
qte = 0
novoCalc = 1
while novoCalc == 1:
    nota = float(input())
    if 0 <= nota <= 10:
        media += nota
        qte += 1
    else:
        print("nota invalida")

    if qte == 2:
        print("media = {:.2f}".format(media/2))
        media = 0
        qte = 0
        novoCalc = -1
        while novoCalc != 1 and novoCalc != 2:
            print("novo calculo (1-sim 2-nao)") 
            novoCalc = int(input())   
