while True:
    try:
        n = int(input())
        cont = 0
        while n/2 >= 1:
            n = n/2
            cont+=1
        
        print("{}".format(cont))
    except EOFError:
        break