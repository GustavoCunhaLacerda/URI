cont = 0
for x in range(5):
    num = int(input())
    if num%2 == 0:
        cont+=1

print("{} valores pares".format(cont))