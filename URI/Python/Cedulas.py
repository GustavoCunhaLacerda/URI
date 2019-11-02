ced = [100, 50, 20, 10, 5, 2, 1]
num = int(input())
print(num)
for c in ced:
    print("{} nota(s) de R$ {},00".format(int(num/c), c))
    num%=c
