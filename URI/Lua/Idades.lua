soma = 0
qte = 0
while true 
do
    idade = io.read("*number")
    if idade < 0 then
        break
    end
    soma = soma + idade
    qte = qte + 1
end
print(string.format( "%.2f",soma/qte ))