gt = 0
it = 0
emp = 0
cont = 1
qte = 0
while cont == 1 do
    i = io.read("*number")
    g = io.read("*number")
    if i == g then
        emp = emp + 1
    else if i > g then
        it = it + 1
    else
        gt = gt + 1
    end
    qte = qte +  1
    print("Novo grenal (1-sim 2-nao)")
    cont = io.read("*number")
end
end
print(string.format("%d grenais",(qte)))
print(string.format("Inter:%d",(it)))
print(string.format("Gremio:%d",(gt)))
print(string.format("Empates:%d",(emp)))
if it == gt then
    print("Nao houve vencedor")
end
if it > gt then
    print("Inter venceu mais")
end
if gt > it then
    print("Gremio venceu mais")
end