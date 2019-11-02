v = {}
for i=1,3 do
    v[i] = io.read("*number")
end
table.sort(v)
io.write(v[3].." eh o maior\n")