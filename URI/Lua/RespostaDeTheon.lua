N = io.read("*number")
numP = io.read("*number")
menor = numP
indiceP = 0
i = tonumber(1)
while i < N do
    numP = io.read("*number")
    if numP < menor then
        menor = numP
        indiceP = i
    end
    i = i + 1
end
print(indiceP+1)