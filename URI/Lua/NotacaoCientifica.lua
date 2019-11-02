x = io.read("*number")
comp = tostring(x)

if string.sub(comp,1,1) == '-' then
    print(string.format("%.4E",x))
else
    print(string.format("+%.4E",x))
end