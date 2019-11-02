n = io.read()

for i = 1, n, 1
do
    nome_forca = io.read()
    if string.sub(nome_forca, 1, 4) == "Thor" then
        io.write("Y\n")
    else 
        io.write("N\n")
    end
end