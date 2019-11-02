number = io.read("*number")
horas = io.read("*number")
sal_hora = io.read("*number")

print(string.format("NUMBER = %d", number))
print(string.format("SALARY = U$ %.2f", horas*sal_hora))
