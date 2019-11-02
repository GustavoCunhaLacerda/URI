a = io.read("*number")
b = io.read("*number")
str = string.format( "%.3f", a*b/12 )
print(str)