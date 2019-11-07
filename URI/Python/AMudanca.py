while True:
    try:
        n = int(input())
        if ( (0 <= n and n < 90)  or n == 360):
            print("Bom Dia!!")
        elif (90 <= n and n < 180):
            print("Boa Tarde!!")
        elif (180 <= n and n < 270):
            print("Boa Noite!!")
        else:
            print("De Madrugada!!")
    except EOFError:
        break