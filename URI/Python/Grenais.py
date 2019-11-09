gt = 0
it = 0
emp = 0
cont = 1
qte = 0
while cont == 1:
    inf = [int(x) for x in input().split()]
    i = inf[0]
    g = inf[1]
    if i == g:
        emp += 1
    elif i > g:
        it += 1
    else:
        gt += 1
    qte += 1
    print("Novo grenal (1-sim 2-nao)")
    cont = int(input())

print("{} grenais".format(qte))
print("Inter:{}".format(it))
print("Gremio:{}".format(gt))
print("Empates:{}".format(emp))
if it == gt:
    print("Nao houve vencedor")
elif it > gt:
    print("Inter venceu mais")
else:
    print("Gremio venceu mais")
