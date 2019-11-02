tmp = io.read("*number")
anos = tmp/365
tmp = tmp%365
meses = tmp/30
tmp = tmp%30
dias = tmp
str = string.format( "%d ano(s)\n%d mes(es)\n%d dia(s)",anos, meses, dias)
print(str)