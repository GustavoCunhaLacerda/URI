qte_numeros = 0
soma = 0

while qte_numeros<3 do
    acao = io.read()
    if acao == "*--" then
        soma = soma + 4
    elseif acao == "-*-" then
        soma = soma + 2
    elseif acao == "--*" then
        soma = soma + 1
    elseif acao == "**-" then
        soma = soma + 6
    elseif acao == "-**" then
        soma = soma + 3
    elseif acao == "*-*" then
        soma = soma + 5
    elseif acao == "***" then
        soma = soma + 7
    elseif acao == "---" then
        soma = soma + 0
    elseif acao == "caw caw" then
        io.write(soma,"\n")
        soma = 0
        qte_numeros = qte_numeros + 1
    end
end