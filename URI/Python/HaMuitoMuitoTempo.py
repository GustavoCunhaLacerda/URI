n = int(input())
for i in range(n):
    anos = int(input())
    anos = 2015 - anos
    if anos <= 0:
        anos*=-1
        anos+=1
        print(anos, "A.C.")
    else:
        print(anos, "D.C.")

    