a = io.read("*number")
b = io.read("*number")
soma = 0
if b > a then
    aux = a
    a = b
    b = aux
end
for i=b, a do
    if i%13 ~= 0 then
        soma = soma + i
    end
end

print(soma)