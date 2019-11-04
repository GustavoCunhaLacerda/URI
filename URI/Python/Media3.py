n = [float(x) for x in input().split()]
media = n[0]*2 + n[1]*3 + n[2]*4 + n[3]
media/= 10.0
print("Media: {:.1f}".format(media))
if media >= 7.0:
    print("Aluno aprovado.")
elif media < 5.0:
    print("Aluno reprovado.")
else:
    n1 = float(input())
    print("Aluno em exame.")
    print("Nota do exame: {:.1f}".format(n1))
    media = ( media + n1 )/2
    if media >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: {:.1f}".format(media))