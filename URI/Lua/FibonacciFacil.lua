fib = {0, 1}
for i=3, 45 do
    fib[i] = fib[i-1]+fib[i-2]
end

n = io.read("*number")
for i=1,n do
    io.write(fib[i])
    if i == n then
        io.write("\n")
    else
        io.write(" ")
    end
end