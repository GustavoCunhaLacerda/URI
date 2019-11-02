number = [int(x) for x in input().split()]
a = number[0]
b = number[1]
c = number[2]
d = number[3]
possivel = "N"
if abs(b-c) < a and a < b+c :
    possivel = "S"

if abs(b-c) < d and d < b+c :
    possivel = "S"

if abs(a-c) < b and b < a+c :
    possivel = "S"

if abs(a-c) < d and d < a+c :
    possivel = "S"


if abs(a-b) < c and c < a+b :
    possivel = "S"

if abs(a-b) < d and d < a+b :
    possivel = "S"

print(possivel)