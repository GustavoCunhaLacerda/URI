# print(codigo)
tradutor = {
    '=.===' : 'a',
    '===.=.=.=': 'b',
    '===.=.===.=': 'c',
    '===.=.=' : 'd',
    '=' : 'e',
    '=.=.===.=' : 'f',
    '===.===.=' : 'g',
    '=.=.=.=' : 'h',
    '=.=' : 'i',
    '=.===.===.===' : 'j',
    '===.=.===' : 'k',
    '=.===.=.=' : 'l',
    '===.===' : 'm',
    '===.=' : 'n',
    '===.===.===' : 'o',
    '=.===.===.=' : 'p',
    '===.===.=.===' : 'q',
    '=.===.=' : 'r',
    '=.=.=' : 's',
    '===' : 't',
    '=.=.===' : 'u',
    '=.=.=.===' : 'v',
    '=.===.===' : 'w',
    '===.=.=.===' : 'x',
    '===.=.===.===' : 'y',
    '===.===.=.=' : 'z',
    'esp' : ' '
}
n = int(input())
for i in range(n):
    codigo = str(input())
    codigo = codigo.replace('.......', '...esp...')
    codigo = codigo.split('...')
    for pal in codigo:
        print(tradutor[pal], end ='')
    print()