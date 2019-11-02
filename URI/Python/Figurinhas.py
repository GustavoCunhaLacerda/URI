n = int(input())
for i in range(n):
    nums = [int(x) for x in input().split()]
    if nums[0] > nums[1]:
        maior = nums[0]
        menor = nums[1]
    else:
        maior = nums[1]
        menor = nums[0]
    resto = maior%menor
    while resto != 0:
        maior = menor
        menor = resto
        resto = maior%menor
    mdc = menor
    print(mdc)