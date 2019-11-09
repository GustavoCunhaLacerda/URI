n = io.read("*number")
for i=1,n do
    x = io.read("*number")
    y = io.read("*number")
    if y == 0 then
        print("divisao impossivel")
    else
        print(string.format( "%.1f", x/y))
    end
end