n = int(input())
for i in range(n):
    infos = [x for x in input().split()]
    b = True
    d = True
    h = True
    if infos[1] == "bin":
        b = False
        base = 2
    if infos[1] == "hex":
        h = False
        base = 16
    if infos[1] == "dec":
        d = False
        base = 10
    
    print("Case {}:".format(i+1))

    if d == True:
        print("{} dec".format( int(infos[0], base) ))
    if h == True:
        print("{} hex".format( hex(int(infos[0], base))[2::] ))
    if b == True:
        print("{} bin".format( bin(int(infos[0], base))[2::] ))
    
    print()