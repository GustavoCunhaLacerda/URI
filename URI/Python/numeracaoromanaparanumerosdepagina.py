unidades = ["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"]
dezenas =  ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"]
centenas = ["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"]

num = int(input())

centena = num//100
dezena  = (num%100)//10
unidade = (num%100)%10
print(centenas[centena], dezenas[dezena], unidades[unidade], sep = '')


