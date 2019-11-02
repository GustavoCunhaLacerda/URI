tmp = int(input())

hora = tmp//3600
tmp%=3600
minuto = tmp//60
tmp%=60
seg = tmp
print("{}:{}:{}".format(hora, minuto, seg))