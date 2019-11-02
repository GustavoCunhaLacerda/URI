infos = [float(x) for x in input().split()]
infos2 = [float(x) for x in input().split()]

valor = infos[1]*infos[2] + infos2[1]*infos2[2]

print("VALOR A PAGAR: R$ {:.2f}".format(valor))