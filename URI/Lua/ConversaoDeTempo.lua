tmp = io.read("*number")

hora = tmp/3600
tmp = tmp%3600
minuto = tmp/60
tmp = tmp%60
seg = tmp
str = string.format("%d:%d:%d", hora, minuto, seg)
print(str)