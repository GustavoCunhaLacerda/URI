tmp = int(input())
anos = tmp/365
tmp = tmp%365
meses = tmp/30
tmp = tmp%30
dias = tmp
print("{} ano(s)".format(int(anos)))
print("{} mes(es)".format(int(meses)))
print("{} dia(s)".format(int(dias)))