fat = [1]
for i in range(1, 21):
    fat.append(i*fat[i-1])
while True:
    try:
        nums = [int(x) for x in input().split()]
        print(fat[nums[0]]+fat[nums[1]])
    except EOFError:
        break