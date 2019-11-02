n = int(input())
for i in range(n):
    num = float(input())
    dias = 0
    while num > 1.0:
        num /= 2.0
        dias+=1

    print(dias, "dias")