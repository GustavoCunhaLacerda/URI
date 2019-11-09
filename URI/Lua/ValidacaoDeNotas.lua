media = 0
qte = 0
while true do
    nota = io.read("*number")
    if 0 <= nota and nota <= 10 then
        media = media + nota
        qte = qte + 1
    else
        print("nota invalida")
    end

    if qte == 2 then
        break
    end
end
print(string.format( "media = %.2f",media/2 ))