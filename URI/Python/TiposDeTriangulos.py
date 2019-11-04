arr = [float(x) for x in input().split()]
arr.sort()
a = arr[2]
b = arr[1]
c = arr[0]
if (a >= b+c) :
    print("NAO FORMA TRIANGULO")
else :
    if (a*a == b*b + c*c) :
        print("TRIANGULO RETANGULO")
    if (a*a < (b*b) + (c*c) ) :
        print("TRIANGULO ACUTANGULO")
    
    if (a*a > (b*b) + (c*c) ) :
        print("TRIANGULO OBTUSANGULO")
    
    if (a == b and b == c) :
        print("TRIANGULO EQUILATERO")
    elif (a == b or a == c or c ==b) :
        print("TRIANGULO ISOSCELES")
    