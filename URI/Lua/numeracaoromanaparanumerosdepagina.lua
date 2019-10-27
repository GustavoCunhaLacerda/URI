unidades = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}
dezenas =  {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}
centenas = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}

num = io.read("*number")

centena = math.floor(num/100)
dezena  = math.floor((num%100)/10)
unidade = math.floor((num%100)%10)
if centenas[centena] ~= nil then
    io.write(centenas[centena])
end
if dezenas[dezena] ~= nil then
    io.write(dezenas[dezena])
end
if unidades[unidade] ~= nil then
    io.write(unidades[unidade])
end
io.write('\n')
