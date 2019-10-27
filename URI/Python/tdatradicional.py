n = int(input())
for a in range(n):
    array = [x for x in input().split()]
    N1 = int(array[0])
    D1 = int(array[2])
    operacao = array[3] 
    N2 = int(array[4])
    D2 = int(array[6])

    if operacao == '+':
        N = (N1*D2 + N2*D1)
        D = (D1*D2)
    if operacao == '-':
        N = (N1*D2 - N2*D1)
        D = (D1*D2)
    if operacao == '*':
        N = (N1*N2)
        D = (D1*D2)
    if operacao == '/':
        N = (N1*D2)
        D = (N2*D1)
    
    print("{}/{} =".format(int(N), int(D)), end=" ")
    
    if (N<D and N != 0):
        menor = N
    else:
        menor = D
    menor = abs(menor)

    for j in range(menor, 0, -1):
        if N%j == 0 and D%j == 0:
            N/=j
            D/=j
    
    print("{}/{}".format(int(N), int(D)))

