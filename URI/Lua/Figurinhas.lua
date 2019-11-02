n = io.read("*number")
for i=1, n, 1
do
    a = io.read("*number")
    b = io.read("*number")
    if a>b then
        maior = a
        menor = b
    else
        maior = b
        menor = a
    end
    resto = maior%menor
    while(resto ~= 0)
    do
        maior = menor
        menor = resto
        resto = maior%menor
    end
    mdc = menor
    print(mdc)
end