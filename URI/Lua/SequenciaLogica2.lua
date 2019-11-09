quebra = io.read("*number")
n =      io.read("*number")

for i=1, n do
    io.write(i)
    if i%quebra == 0 then
        print()
    else
        io.write(" ")
    end
end