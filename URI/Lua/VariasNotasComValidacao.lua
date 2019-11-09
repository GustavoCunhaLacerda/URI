media = 0
qte = 0
novoC = 1
while novoC == 1 do
    nota = io.read("*number")
    if 0 <= nota and nota <= 10 then
        media = media + nota
        qte = qte + 1
    else
        print("nota invalida")
    end

    if qte == 2 then
        print(string.format( "media = %.2f",media/2 ))
        media = 0
        qte = 0
        ::LABEL1::
        print("novo calculo (1-sim 2-nao)")
        novoC = io.read("*number")
        if novoC ~= 1 and novoC ~= 2 then
            goto LABEL1
        end
    end
end