a = io.read("*number")
b = io.read("*number")
c = io.read("*number")

delta = b*b - (4*a*c)
if delta < 0 or a == 0 then
    print("Impossivel calcular")
    goto END
end 
r1 = (-b + math.sqrt( delta ))/(2*a)
r2 = (-b - math.sqrt( delta ))/(2*a)
print(string.format("R1 = %.5f", r1))
print(string.format("R2 = %.5f", r2))
::END::