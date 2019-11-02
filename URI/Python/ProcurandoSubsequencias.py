caso = 1
while True:
    try:
        sub = input()
        string = input()
        print("Caso #{}:".format(caso))
        caso+=1
        if string.count(sub) == 0:
            print("Nao existe subsequencia\n")
        else:
            print("Qtd.Subsequencias: {}".format(string.count(sub)))
            aux = 0
            while aux < len(string) and string.find(sub, aux, len(string)) != -1:
                aux+=1
            print("Pos: {}\n".format(aux))
    except EOFError:
        break