infos = [float(x) for x in input().split()]
antigo = infos[0] 
novo = infos[1]

porcentagem = ((novo/antigo) * 100) - 100

print("{:.2f}%".format(porcentagem))