fib = [0, 1]
for i in range(2, 46):
    fib.append(fib[i-1]+fib[i-2])

n = int(input())
for i in range(n):
    print(fib[i], end='')
    if i == n-1:
        print()
    else:
        print(" ", end = '')
