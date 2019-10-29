class fazenda():
    def __init__(self, carneiros):
        self.carneiros = carneiros
        self.visitada = False

n = int(input())
farm = [fazenda(int(x)) for x in input().split()]

for x in farm:
    carneiros_t+= x.carneiros
farms_afetadas = 0
indice = 0
prox_indice = 0

while indice != -1 and indice != n:
    if farm[indice].carneiros % 2 == 0:
        prox_indice-=1
    else:
        prox_indice+=1
    
    if farm[indice].carneiros > 0:
        farm[indice].carneiros-=1
        carneiros_t-=1
    
    if farm[indice].visitada == False:
        farm[indice].visitada = True
        farms_afetadas +=1
    
    indice = prox_indice

print("{} {}".format(farms_afetadas, carneiros_t))