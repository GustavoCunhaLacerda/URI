ced = {100, 50, 20, 10, 5, 2, 1}
num = io.read("*number")
print(num)
for i=1, 7 
do
    str = string.format("%d nota(s) de R$ %d,00", num/ced[i], ced[i])
    num = num%ced[i]
    print(str)
end