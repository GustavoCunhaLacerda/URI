n = io.read("*number")
io.read()
for qte = 1, n, 1
do
    text = io.read("*line")
    numbers = io.read("*line")

    infos = {}

    i = 1
    for token in string.gmatch(text, "[^%s]+") do
        infos[i] = tostring(token)
        i = i + 1
    end

    soma = 0
    for token in string.gmatch(numbers, "[^%s]+") do
        soma = soma + tonumber(token)
    end

    if soma%2 == 0 then
        res = "PAR"
    else 
        res = "IMPAR"
    end

    if infos[2] == res then
        print(infos[1])
    else 
        print(infos[3])
    end
end