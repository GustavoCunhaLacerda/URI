import os
import shutil
tudo_pasta = os.listdir('./')

# linguagens
# <list>[0] = existencia de pasta
C      = ["C",      -1]
Cpp    = ["C++",    -1]
Lua    = ["Lua",    -1]
Python = ["Python", -1]
Java   = ["Java",   -1]

def analise_pastas_arquivos(entries):
    for item in entries:
        # pastas
        if item == "C":
            C[1] = 1
        if item == "C++":
            Cpp[1] = 1
        if item == "Lua":
            Lua[1] = 1
        if item == "Python":
            Python[1] = 1
        if item == "Java":
            Java[1] = 1

        # arquivos
        if item.find(".cpp") != -1:
            Cpp.append(item)
        elif item.find(".c") != -1:
            C.append(item)
        elif item.find(".java") != -1:
            Java.append(item)
        elif item.find(".class") != -1:
            os.system("rm {}".format(item))
        elif item.find(".lua") != -1:
            Lua.append(item)
        elif item.find(".py") != -1:
            if item != "uri_org.py":
                Python.append(item)

def criacao_pastas():
    print("C:")
    if len(C) > 2:
        if C[1] == 1:
            print("Pasta de 'C' EXISTENTE e pronta para abrigar arquivos !")
        else:
            print("Criando pasta de 'C':", end= ' ')
            os.system("mkdir C")
            print("FEITO")
        organizar(C)
    else:
        print("Não há arquivos 'C' para organizar")
    print("FIM")

    print("\nC++:")
    if len(Cpp) > 2:
        if Cpp[1] == 1:
            print("Pasta de 'C++' EXISTENTE e pronta para abrigar arquivos !")
        else:
            print("Criando pasta de 'C++':", end= ' ')
            os.system("mkdir C++")
            print("FEITO")
        organizar(Cpp)
    else:
        print("Não há arquivos 'C++' para organizar")
    print("FIM")

    print("\nLua:")
    if len(Lua) > 2:
        if Lua[1] == 1:
            print("Pasta de 'Lua' EXISTENTE e pronta para abrigar arquivos !")
        else:
            print("Criando pasta de 'Lua':", end= ' ')
            os.system("mkdir Lua")
            print("FEITO")
        organizar(Lua)
    else:
        print("Não há arquivos 'Lua' para organizar")
    print("FIM")
    
    print("\nPython:")
    if len(Python) > 2:
        if Python[1] == 1:
            print("Pasta de 'Python' EXISTENTE e pronta para abrigar arquivos !")
        else:
            print("Criando pasta de 'Python':", end= ' ')
            os.system("mkdir Python")
            print("FEITO")
        organizar(Python)
    else:
        print("Não há arquivos 'Python' para organizar")
    print("FIM")

    print("\nJava:")
    if len(Java) > 2:
        if Java[1] == 1:
            print("Pasta de 'Java' EXISTENTE e pronta para abrigar arquivos !")
        else:
            print("Criando pasta de 'Java':", end= ' ')
            os.system("mkdir Java")
            print("FEITO")
        organizar(Java)
    else:
        print("Não há arquivos 'Java' para organizar")
    print("FIM")

def organizar(linguagem):
    print("Organizando arquivos -> {}".format(linguagem[0]))
    for indice in range(2, len(linguagem)):
        shutil.move("./{}".format(linguagem[indice]), "./{}/".format(linguagem[0]))
        print("Arquivo '{}' movido para './{}.".format(linguagem[indice], linguagem[0]))


analise_pastas_arquivos(tudo_pasta)
criacao_pastas()
