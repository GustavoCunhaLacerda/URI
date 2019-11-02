n = io.read("*number")
preco = 0
for i=1,n do
    etiqueta = io.read("*number")
    qte = io.read("*number")
    if etiqueta == 1001 then
        preco = preco + qte*1.50
    end
    if etiqueta == 1002 then
        preco = preco + qte*2.50
    end
    if etiqueta == 1003 then
        preco = preco + qte*3.50
    end
    if etiqueta == 1004 then
        preco = preco + qte*4.50
    end
    if etiqueta == 1005 then
        preco = preco + qte*5.50
    end
end
print(string.format("%.2f", preco))