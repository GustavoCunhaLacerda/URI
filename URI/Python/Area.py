infos = [float(x) for x in input().split()]
a = infos[0]
b = infos[1]
c = infos[2]

print("TRIANGULO: {:.3f}".format(a*c/2))
print("CIRCULO: {:.3f}".format(c*c*3.14159))
print("TRAPEZIO: {:.3f}".format((a+b)*c/2))
print("QUADRADO: {:.3f}".format(b*b))
print("RETANGULO: {:.3f}".format(b*a))
