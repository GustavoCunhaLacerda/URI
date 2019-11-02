tag = io.read("*number")
qte = io.read("*number")
valor = io.read("*number")

res = valor * qte

tag = io.read("*number")
qte = io.read("*number")
valor = io.read("*number")

res = res + (valor*qte)

str = string.format( "VALOR A PAGAR: R$ %.2f", res)
print(str)