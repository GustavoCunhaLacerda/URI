x = [int(x) for x in input().split()]
A = x[0]
B = x[1]
C = x[2]
D = x[3]
if (B>C) and (D>A) and ((C+D)>(A+B)) and (C>0) and (D>0) and ((A%2)==0):
    print("Valores aceitos")
else:
    print("Valores nao aceitos")