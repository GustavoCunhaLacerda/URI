qin = 0
qout = 0
nums = []
n = int(input())

for i in range(n):
    nums.append(int(input()))

for i in nums:
    if i >= 10 and i <= 20:
        qin +=1
    else:
        qout+=1

print("{} in".format(qin))
print("{} out".format(qout))
