r = io.read("*number")
pi = 3.14159
volume  = (4/3)*pi*r*r*r

io.write(string.format("VOLUME = %.3f\n", volume))