x1 = io.read("*number")
y1 = io.read("*number")

x2 = io.read("*number")
y2 = io.read("*number")

dist = math.sqrt( (x2-x1)*(x2-x1) + (y1-y2)*(y1-y2) )
print(string.format( "%.4f", dist ))