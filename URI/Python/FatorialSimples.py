num = int(input())

for i in range(num-1, 1, -1):
    num *= i
if num == 0:
    num +=1
print(num)