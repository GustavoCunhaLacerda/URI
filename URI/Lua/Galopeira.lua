n = io.read("*number")
io.read()
for i=1,n do
    s = io.read()
    t = string.len( s )/100
    print(string.format( "%.2f", t))
end