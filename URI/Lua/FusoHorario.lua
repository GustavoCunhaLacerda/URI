a = io.read("*number") 
b = io.read("*number")
c = io.read("*number")

fuso = a+b+c

if fuso >= 24 then
    fuso = fuso - 24
end
if fuso < 0 then
    fuso = fuso + 24
end

io.write(fuso..'\n')
