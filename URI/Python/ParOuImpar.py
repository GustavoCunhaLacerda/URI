n = int(input())
nums = []

for i in range(n):
    nums.append(int(input()))

for i in nums:
    if i==0:
        print("NULL")
    elif i%2 == 0:
        if i > 0:
            print("EVEN POSITIVE")
        else:
            print("EVEN NEGATIVE")
    else:
        if i > 0:
            print("ODD POSITIVE")
        else:
            print("ODD NEGATIVE")
