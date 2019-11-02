num = int(input())
maior = num
pos = 1
for i in range(99):
    num = int(input())
    if num>maior:
        maior = num
        pos = i+2
        
print(maior)
print(pos)