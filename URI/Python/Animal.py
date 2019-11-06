dicio = {
    'vertebradoavecarnivoro' : 'aguia',
    'vertebradoaveonivoro' : 'pomba',

    'vertebradomamiferoonivoro' : 'homem',
    'vertebradomamiferoherbivoro' : 'vaca',

    'invertebradoinsetohematofago' : 'pulga',
    'invertebradoinsetoherbivoro' : 'lagarta',

    'invertebradoanelideohematofago' : 'sanguessuga',
    'invertebradoanelideoonivoro' : 'minhoca' 
}

a = input()
b = input()
c = input()
print(dicio[a+b+c])
