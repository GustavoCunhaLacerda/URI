string = "0"
number = 1
while number < 201:
    string+=(" {}".format(number) * number)
    number+=1
vetor = [x for x in string.split()]
# print(len(vetor))
caso = 1
while True:
    try:
        n = int(input())
        n+=1
        qte = int(1 + (n)*(n-1)/2)
        print("Caso {}: {} ".format(caso, qte), end ='')
        caso+=1
        if qte == 1:
            print("numero")
        else:
            print("numeros")

        for i in range(qte):
            print("{}".format(vetor[i]), end='')
            if i<qte-1:
                print(' ', end='')
            else:
                print()
        print()
    except EOFError:
        break
