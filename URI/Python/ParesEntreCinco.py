nums = []
qte = 0
for i in range(0, 5):
    nums.append(int(input()))

for i in nums:
    if i%2 == 0:
        qte+=1


print("{} valores pares\n".format(qte))

