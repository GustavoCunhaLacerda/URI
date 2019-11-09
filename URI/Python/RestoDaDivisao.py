a = int(input())
b = int(input())

if b > a:
    aux = a
    a = b
    b = aux

for x in range(b+1, a):
    if x % 5 == 2 or x % 5 == 3:
        print(x)
