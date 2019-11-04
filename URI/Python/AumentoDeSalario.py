salario = float(input())
if (salario >= 0 and salario <= 400.00):
    percentual = 0.15
if (salario >= 400.01 and salario <= 800.00):
    percentual = 0.12
if (salario >= 800.01 and salario <= 1200.00):
    percentual = 0.10
if (salario >= 1200.01 and salario <= 2000.00):
    percentual = 0.07
if (salario > 2000.00):
    percentual = 0.04

reajuste = salario*percentual
print("Novo salario: {:.2f}".format(salario+reajuste))
print("Reajuste ganho: {:.2f}".format(reajuste))
print("Em percentual: {:.0f} %".format(percentual*100))