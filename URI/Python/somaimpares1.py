x = int(input())
y = int(input())

soma = 0
i = y+1
while i!=x:
	if i%2 != 0:
		soma+=i

	i+=1

print(soma)