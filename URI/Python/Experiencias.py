n = int(input())
coelhos = 0
ratos = 0
sapos = 0

for i in range(n):
    inf = [x for x in input().split()]
    qte = int(inf[0])
    if inf[1] == 'C':
        coelhos+=int(qte)
    elif inf[1] == 'R':
        ratos+=qte
    else:
        sapos+=qte

total = coelhos+sapos+ratos

print("Total: {} cobaias".format(total))
print("Total de coelhos: {}".format(coelhos))
print("Total de ratos: {}".format(ratos))
print("Total de sapos: {}".format(sapos))

print("Percentual de coelhos: {:.2f} %".format(100*coelhos/total))
print("Percentual de ratos: {:.2f} %".format(100*ratos/total))
print("Percentual de sapos: {:.2f} %".format(100*sapos/total))
