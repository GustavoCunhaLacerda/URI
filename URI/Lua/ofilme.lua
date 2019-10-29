antigo = io.read("*number")
novo = io.read("*number")

porcentagem = ((novo/antigo) * 100.0) - 100.0

print(string.format("%.2f%%", porcentagem))