n = io.read()
for a=1, n, 1 do
    text = tostring(io.read())
    array = {}
    i=0
    for token in string.gmatch(text, "[^%s]+") do
        array[i] = token
        i = i + 1
    end
    N1 = array[0]
    D1 = array[2]
    operacao = array[3] 
    N2 = array[4]
    D2 = array[6]

    if operacao == '+' then
        N = (N1*D2 + N2*D1)
        D = (D1*D2)
    elseif operacao == '-' then
        N = (N1*D2 - N2*D1)
        D = (D1*D2)
    elseif operacao == '*' then
        N = (N1*N2)
        D = (D1*D2)
    elseif operacao == '/' then
        N = (N1*D2)
        D = (N2*D1)
    end

    io.write(N.."/"..D.." = ");
    
    if (N<D and N ~= 0) then
        menor = N
    else
        menor = D
    end

    menor = math.abs(menor)

    for j=menor, 1, -1 do
        if N%j == 0 and D%j == 0 then
            N = N / j
            D = D / j
        end
    end
    io.write(N.."/"..D.."\n");

end