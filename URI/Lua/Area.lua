a = io.read("*number")
b = io.read("*number")
c = io.read("*number")

print(string.format("TRIANGULO: %.3f", a*c/2))
print(string.format("CIRCULO: %.3f", c*c*3.14159))
print(string.format("TRAPEZIO: %.3f", (a+b)*c/2))
print(string.format("QUADRADO: %.3f", b*b))
print(string.format("RETANGULO: %.3f", b*a))
