a = io.read("*number")
b = io.read("*number")
soma = 0
if b > a then
    aux = a
    a = b
    b = aux
end
for i=b+1, a-1 do
    if i%5 == 2 or i%5 == 3 then
        print(i)
    end
end