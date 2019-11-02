n = int(input())
infos = [x for x in input().split()]
maior = infos[0]
m_maior = float(infos[1])
for i in range(n-1):
    infos = [x for x in input().split()]
    nota = float(infos[1])
    if nota > m_maior:
        m_maior = nota
        maior = infos[0]

if m_maior < 8:
    print("Minimum note not reached")
else:
    print(maior)