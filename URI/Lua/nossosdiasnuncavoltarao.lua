frase = "LIFE IS NOT A PROBLEM TO BE SOLVED"
i = 1
N = io.read()
while i<N+1 do
    io.write(string.sub(frase, i, i))
    i = i + 1 
end
io.write("\n")
