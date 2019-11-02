a = io.read("*number")
b = io.read("*number")
r = a%b

if r < 0 then
    r = r - b 
end
q = (a-r)/b
print(string.format("%d %d", q, r))
