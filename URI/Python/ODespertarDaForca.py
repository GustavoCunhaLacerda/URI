inf = [int(x) for x in input().split()]
n = inf[0]
m = inf[1]
v = []
pi = -1
pj = -1
for i in range(n):
    aux = [int(x) for x in input().split()]
    v.append(aux)

for linha in range(1, n-1):
    for coluna in range(1, m-1):
        if (v[linha][coluna] == 42):
            if (v[linha+1][coluna] == 7 and v[linha][coluna+1] == 7 and v[linha-1][coluna] == 7 and v[linha][coluna-1] == 7):
                    if (v[linha+1][coluna+1] == 7 and v[linha-1][coluna-1] == 7):
                        if (v[linha-1][coluna+1] == 7 and v[linha+1][coluna-1] == 7):
                            pi = linha
                            pj = coluna

print(pi+1, pj+1)