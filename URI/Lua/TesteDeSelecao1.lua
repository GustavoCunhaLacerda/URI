A = io.read("*number")
B = io.read("*number")
C = io.read("*number")
D = io.read("*number")

if (B>C) and (D>A) and ((C+D)>(A+B)) and (C>0) and (D>0) and ((A%2)==0) then
    print("Valores aceitos")
else 
    print("Valores nao aceitos")
end