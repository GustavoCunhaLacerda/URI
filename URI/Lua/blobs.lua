n = io.read("*number")
for i=1,n do
    num = io.read("*number")
    dias = 0
    while(num > 1.0)
    do
        num = num/2.0
        dias = dias + 1
    end
    print(dias.." dias")
end