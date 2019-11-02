name = io.read()
sal = io.read("*number")
vendas = io.read("*number")

io.write(string.format("TOTAL = R$ %.2f\n", sal+(vendas*0.15)))