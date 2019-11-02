a = io.read("*number")
b = io.read("*number")
c = io.read("*number")
d = io.read("*number")
possivel = "N"
if math.abs(b-c) < a and a < b+c then
    possivel = "S"
end
if math.abs(b-c) < d and d < b+c then
    possivel = "S"
end   

if math.abs(a-c) < b and b < a+c then
    possivel = "S"
end
if math.abs(a-c) < d and d < a+c then
    possivel = "S"
end

if math.abs(a-b) < c and c < a+b then
    possivel = "S"
end
if math.abs(a-b) < d and d < a+b then
    possivel = "S"
end 

print(possivel)