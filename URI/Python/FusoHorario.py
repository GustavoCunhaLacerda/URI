x = [int(num) for num in input().split()]

fuso = sum(x)
if fuso>=24:
    fuso-=24
if fuso < 0:
    fuso+=24

print(fuso)