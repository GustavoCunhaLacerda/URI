infos = [float(x) for x in input().split()]
a = infos[0]
b = infos[1]
c = infos[2]
delta = b*b - (4*a*c)
if delta < 0 or a == 0:
    print("Impossivel calcular")
else:
    r1 = (-b + ( delta**(1/2) ))/(2*a)
    r2 = (-b - ( delta**(1/2) ))/(2*a)
    print("R1 = {:.5f}".format(r1))
    print("R2 = {:.5f}".format(r2))
