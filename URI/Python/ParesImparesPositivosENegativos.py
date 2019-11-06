par = 0
impar = 0
pos = 0
neg = 0
for x in range(5):
    num = int(input())
    if num%2 == 0:
        par+=1
    else:
        impar+=1
    
    if num>0:
        pos+=1
    elif num < 0:
        neg+=1

print("{} valor(es) par(es)".format(par))
print("{} valor(es) impar(es)".format(impar))
print("{} valor(es) positivo(s)".format(pos))
print("{} valor(es) negativo(s)".format(neg))